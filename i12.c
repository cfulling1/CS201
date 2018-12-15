#include<stdio.h>
int main()
{
  FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");
  int occ=0;
  int x;
  int pos=0;
  int curpos=0;
  int numpos;
  while (1==fscanf(f, "%d\n", &x))
   {
     curpos++;
     if(x==7798)
       printf("%d\n", curpos);   
  }
  fclose(f);
}
