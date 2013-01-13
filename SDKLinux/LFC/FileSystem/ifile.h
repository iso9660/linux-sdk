#ifndef IFILE_H
#define IFILE_H

#include <sys/types.h>

class Text;

class IFile {

public:
	IFile();
	virtual ~IFile();

	virtual off_t FSetStart() = 0;
	virtual off_t FSetEnd() = 0;
	virtual off_t FSet(int position) = 0;
	virtual off_t FGet() = 0;
	virtual int Read(char *buffer, int lonBuffer) = 0;
	virtual int Write(const char *buffer, int lonBuffer) = 0;
	
};

#endif // IFILE_H
