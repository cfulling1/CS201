 
#include<stdio.h>

int main() 
{
  FILE * f = fopen("/u1/h0/sternfl/201/nums", "r");
  int max = -214748369;
  int maxpos = 0;
  int curpos = 0;
  int num;
  while (1==fscanf(f, "%d\n", &num))
  {
    curpos++;
    if (num >= max)
    {
     max = num;
     maxpos = curpos;
    }  
  }
  printf("The max number (%d) is the %d number\n", max, maxpos);
}
