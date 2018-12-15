#include<stdio.h>
#include<string.h>

char *myStrcat_with_function_calls (char *destination, const char * source) {
  int len=strlen(destination);
  strcpy(destination + len, source);
  return destination;




int myStrcat(char *destination, const char *source) {
int len, i;
for (len=0; destination[len] != 0; len++);
for (i=0; source[i] != 0; i++)
  destination[len+i]=source[i];
destination[len+i]=0;
return destination;
}
}
