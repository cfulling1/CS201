#include<stdio.h>
int main()
{
  int x;
  int occ=0;
   FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");
   {
    while(1==fscanf(f, "%d\n", &x))
    {
      if(x==7798)
        occ=occ+1;
    }
   }
   fclose(f);  
   printf("%d\n", occ);
}
