#include<stdio.h>

void assign(int *a, int v); //function declaration

int main() {
  int x=0;
  assign(&x, 7);
  printf("%d\n", x);
}
