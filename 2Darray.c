
#include<stdio.h>
#include<stdlib.h>

#define SZ 11

int brd[SZ][SZ];

void init() {
  int i, j;
  for(i=0; i<SZ; i++)
  for(j=0; j<SZ; j++)
    brd[i][j] = 0;
  for(i=0; i<SZ; i++) {
    brd[0][i] = -1;
    brd[i][0] = -1;
    brd[10][i] = -1;
    brd[i][10] = -1;
  }
}

void prtBrd() {
  int i,j;
  for(i=0; i<SZ; i++) {//row
    for(j=0; j<SZ; j++)
      printf("%3d", brd[i][j]);
    printf("\n");
  }
  printf("\n");
}

int k=0;
void step(int r, int c, int num) {
  if (k>10) {
    prtBrd();
    exit(0);
    }
    
  if (brd[r][c]!=0)
    return;
  k++;
  brd[r][c]=num; //marking our step
  step(r, c-1, num+1); //left
  step(r-1, c, num+1); //up
  step(r, c+1, num+1); //right
  step(r+1, c, num+1); //down
}

int main() {
  init();
  prtBrd();
  step(2,9,1);
}
