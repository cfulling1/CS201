#include<stdio.h>
#include<string.h>

char *myStrcat(char *dest, const char *src)
{
  {
  int len=strlen(dest);
  strcpy(dest+len, src);
  return dest;
  }
  {
  int len, i;
  for (len=0; dest[len] != 0; len++);
  for (i=0; src[i] != 0; i++);
    dest[len+i]=src[i];
  dest[len+i]=0;
  return dest;
  }
}
