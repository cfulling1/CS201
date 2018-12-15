#include<stdio.h>

int main() 
{
int count1=0;
int count2=0;
int slw;
int fst=1;
int prev;
int max=0;
FILE *f =fopen("/u1/class/cs20104/nums", "r");
  fscanf(f, "%d\n", &prev);
  
  while(1==fscanf(f, "%d\n", &slw))
  {
   fst++;
     {
     if(fst>=slw)
       {
       count2= ++count1;
       }
     else
       prev=count2;
        if (prev>=max)
          max=prev;
        else
          {
          prev=0;
          count1=0;
          }
      }
   }
fclose(f);
printf("%d\n", max);
}
