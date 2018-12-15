#include<stdio.h>
int main() {
 int u;
 printf("Please enter the number of rows you want\n");
 scanf("%d", &u);
 int i, j, k;
 int numAst=1;
 int numSp=u-1;
   for(i=0; i<u; i++) {
   for(k=0; k<numSp; k++)
     printf(" ");
     for(j=0; j<numAst; j++)
     printf("*");
     printf("\n");
     numAst+=2;
     numSp--;
     }
}
