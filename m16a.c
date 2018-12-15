#include<stdio.h>
#include<string.h>

int myStrcat(char *destination, const char *source);

int main() {
  char str[80];
  char inp[20];
  while(!feof(stdin))
  {
    gets(inp);
    myStrcat(str, inp);
  }
  puts (str);
  return 0;
}
