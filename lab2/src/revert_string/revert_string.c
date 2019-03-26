#include "revert_string.h"
#include "string.h"

void RevertString(char *str)
{
    int len = strlen(str);
    char revStr[len];
	for(int i = 0; i < len; i++)
	{
	    revStr[i] = str[len-i-1];
	}
	strcpy(str, revStr);
}

