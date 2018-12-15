#include<stdio.h>
int main() {
  int x;
  FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");
  int i;
  for(i=1; i<=10; i++)
    fscanf(f, "%d", &x);
  fclose(f);
  printf("%d\n", x);
  }
