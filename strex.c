#include<stdio.h>
#include<string.h>


//get two strings from the user and concatenates them
int main() {
  printf("Please enter your first string, keep it small\n");
  char a[100];
  scanf("%s", a);
  
  printf("Please enter your first string, keep it small\n");
  char b[100];
  scanf("%s", b);
  printf("The concatenation is %s\n", strcat(a,b));
}
