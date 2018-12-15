#include<stdio.h>

int main() {
  int u;
  printf("Please enter the number of rows you want\n");
  scanf("%d", &u);
  int i, j;
  int numAst = u;
  int numSp = 0;
  for(i=0; i<u; i++) {
    for (j=0; j<numSp; j++)
      printf(" ");
    for (j=0; j<numAst; j++)
        printf("*");
      printf("\n");
      numAst--;
      numSp++;
      
  }
}
