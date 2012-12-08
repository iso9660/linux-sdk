#include "testdatetime.h"
#include "../LFC/LFC.h"
#include <stdio.h>

TestDateTime::TestDateTime()
{
}

TestDateTime::~TestDateTime()
{
}

int TestDateTime::Perform()
{
	DateTime t;
	t.ToUtcDateTime().ToText().PrintLine();
	t.ToText().PrintLine();
	
	DateTime cmpl(1977, 03, 06);
	cmpl.ToText("%d/%m/%Y %H:%M:%S").PrintLine();	
	if (cmpl.ToText("%d/%m/%Y %H:%M:%S") != "06/03/1977 00:00:00") {
		Text::PrintLine("DateTime instantiation error!");
		return -1;
	}
	if (cmpl.Year() != 1977 || cmpl.Month() != 03 || cmpl.Day() != 06) {
		Text::PrintLine("Cannot extract member variables");
		return -1;
	}
	
	DateTime cmpl2(1981, 12, 07, 03, 04, 05);
	cmpl2.ToText("%d/%m/%Y %H:%M:%S").PrintLine();
	if (cmpl2.ToText(L"%d/%m/%Y %H:%M:%S") != L"07/12/1981 03:04:05") {
		Text::PrintLine("DateTime instantiation error!");
		return -1;
	}
	if (cmpl2.Year() != 1981 || cmpl2.Month() != 12 || cmpl2.Day() != 07 || 
		cmpl2.Hour() != 03 || cmpl2.Minute() != 04 || cmpl2.Second() != 05) 
	{
		Text::PrintLine("Cannot extract member variables");
		return -1;
	}
	
	DateTime cpy = cmpl2.TotalDays();
	if (cpy != cmpl2) {
		Text::PrintLine("DateTime TotalDays composition doesn't work!");
		return -1;
	}
	if (cpy < cmpl2 || !(cpy <= cmpl2) || !(cpy == cmpl2) || cpy > cmpl2 || !(cpy >= cmpl2)) {
		Text::PrintLine("DateTime comparation error!");
		return -1;
	}
	if (cmpl > cmpl2 || cmpl >= cmpl2 || cmpl2 < cmpl || cmpl2 <= cmpl) {
		Text::PrintLine("DateTime comparation error!");
		return -1;
	}
	
	DateTime cpy2(cmpl2);
	if (cpy2 != cmpl2 || cpy2 != cpy) {
		Text::PrintLine("DateTime constructor composition doesn't work!");
		return -1;
	}
	
	DateTime datePartA = cmpl.DatePart();
	if (datePartA != cmpl) {
		Text::PrintLine("DateTime DatePart doesn't work!");
		return -1;
	}
	
	DateTime datePart = cmpl2.DatePart();
	datePart.ToText("%d/%m/%Y %H:%M:%S").PrintLine();
	if (datePart.ToText("%d/%m/%Y %H:%M:%S") != L"07/12/1981 00:00:00") {
		Text::PrintLine("DatePart doesn't work!");
		return -1;
	}
	
	DateTime timePart = cmpl2.TimePart();
	timePart.ToText("%d/%m/%Y %H:%M:%S").PrintLine();
	if (timePart.ToText("%d/%m/%Y %H:%M:%S") != "01/01/1970 03:04:05") {
		Text::PrintLine("TimePart doesn't work!");
		return -1;
	}
	
	DateTime temp = datePart + timePart;
	temp.ToText("%d/%m/%Y %H:%M:%S").PrintLine();
	
	if (cmpl2 != datePart + timePart) {
		Text::PrintLine("DateTime DatePart and TimePart don't work!");
		return -1;
	}

	return 0;
}
