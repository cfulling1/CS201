#include<stdio.h>
int main() 
{
  int sum=0;
  int num;
  int count=0;
  FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");
  while (1==fscanf(f, "%d\n", &num))
  {
    sum=sum+num;
    count++;
  }
  double av = (double)sum/count; 
  printf("%f\n", av);
  fclose(f);
}
