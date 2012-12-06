#ifndef EXCEPTION_H
#define EXCEPTION_H

#include "n_object.h"

class Text;

class Exception : NObject {

public:
	Exception();
	Exception(const char *t);
	Exception(const Text &t);
	Exception(const Exception &t);
	virtual ~Exception();
	
	Text ToText();

protected:
	Text *t;
	
};

#endif // EXCEPTION_H
