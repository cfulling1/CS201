#include<stdio.h>

char *myRindex(const char *, int);

int main() {
char a[100];
char c;
printf("Enter a string, a space, and a character\n");
scanf("%s %c", a, &c);

if (myRindex(a,c)!=0)
  printf("%s\n", myRindex(a,c));
else printf("%c not found\n", c);
}
