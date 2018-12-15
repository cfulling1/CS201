#include<stdio.h>

int main() 
{
int count1=0;
int count2=0;
int slw;
int fst=1; //length of run
int prev;
int max=0;
FILE *f =fopen("/u1/h0/sternfl/201/nums", "r");
  fscanf(f, "%d", &prev);
  
  while(1==fscanf(f, "%d", &slw))
  {
     if(prev>slw)  //new run
       {
	   //printf("%d\n", fst);
	   if (fst>max) 
		  max = fst; 
	  fst=1;
	   
       }
     else     //in the old run
	     fst++;
     prev = slw;
   }
fclose(f);
if (fst>max)
	 max=fst;
printf("%d\n", max);
}
