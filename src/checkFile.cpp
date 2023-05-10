#include <stdio.h>
#include "checkFile.h"
//Replaces access for 3DS.
bool checkFile(const char* path, int mode)
{
    //Todo add mode check!
	FILE* f = fopen(path, "r");
	if (f)
	{
        	fclose(f);
		return false;
	} else {
        return true;
    }
}