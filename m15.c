#include<stdio.h>
#include<string.h>

int main() {
char dest[100];
char src[]="hello there";
strcpy (dest, src);
printf("%s\n", dest);
}
