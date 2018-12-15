#include<stdio.h>
int main() {
int x;
FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");
int i;
int s;
while (1==fscanf(f, "%d", &x))
  if(x<3000)
    s=s+x;
  fclose(f);
  printf("%d\n", s);
  }
  
  
  
