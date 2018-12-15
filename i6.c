#include<stdio.h>
int main() 
{
int x;
FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");
int sum=0;
while (1==fscanf(f, "%d", &x))
  if(x<3000)
    sum=sum+x;
  fclose(f);
  printf("%d\n", sum);
}
