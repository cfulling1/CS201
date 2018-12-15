
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
  brd[7][9] = 3;
  brd[9][7] = 7;
  brd[9][9] = 1;
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
//take a step from current location r,c
//if brd[r][c] is zero put in num
//tr,tc target location
//breaks the calls and ends the recursion.
int left=0, up=1, right=2, down=3;
void step(int r, int c, int num, int tr, int tc, int dir) {
   int tnum = brd[tr][tc];
   if (num==tnum) {
     if (r==tr && c==tc)
       prtBrd();
     return;
   }
   if (brd[r][c]!=0)
     return;
   k++;
   brd[r][c] = num; //we've marked our step.
   step(r, c-1,num+1,tr, tc, left);  //left
   step(r-1, c, num+1,tr, tc,up);  //up
   step(r, c+1, num+1,tr, tc, right);  //right 
   step(r+1, c, num+1,tr, tc, down);  //down 
   brd[r][c] = 0;
   return;
}

//r,c start location;  tr,tc target location
void findPaths(int r, int c, int tr, int tc) {
  int sv = brd[r][c];
  step(r, c-1,sv+1,tr, tc,left);  //left
  step(r-1, c, sv+1,tr, tc,up);  //up
  step(r, c+1, sv+1,tr, tc,right);  //right 
  step(r+1, c, sv+1,tr, tc,down);  //down 
}


int main() {
  init();
  prtBrd();
  findPaths(7,9, 9,7);
}





