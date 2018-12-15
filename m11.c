#include<stdio.h>

int myStrlen(const char *);

int main() {
  char a[100];
  printf("Enter a string\n");
  scanf("%s", a); 
  printf("%d\n", myStrlen(a));
}
