#include<stdio.h>
#include<string.h>

int myStrcmp(const char *, const char *);

int main() {
char a[200];
char b[200];
printf("Enter a string, a space, and another string\n");
scanf("%s %s", a, b);
if (myStrcmp(a,b)!=0)
  printf("%d\n", myStrcmp(a,b));
}
