#include<stdio.h>
#include<string.h>

int *myStrcat(char *dest, const char *src);

int main() {
char str[80];
strcpy (str, "hello ");
myStrcat (str, "there");
puts (str);
return 0;
}
