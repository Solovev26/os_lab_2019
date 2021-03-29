#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	int len=strlen(str);

  for(int i=0;i<len/2;i++)
  {
    char t=str[i];
    str[i]=str[len-i-1];
    str[len-i-1]=t;
  }
  str[0]='1';
  str[len]='1';
  str[2]='4';
}

