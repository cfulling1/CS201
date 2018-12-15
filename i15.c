#include<stdio.h>

int main() {
int i=0;
int a[10];
int x, j;
FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");

while(1==fscanf(f, "%d", &x))
  {
  a[i]=x;
  i=(i+1)%10;
  }
  for (j=0; j<10; j++)
  {
    printf("%d\n", a[i]);
    i=(i+1)%10;
  }
}
