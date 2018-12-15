#include<stdio.h>
int f(int *x, int *y, int z) {
  x--;
  *y += x[z];
  return *y + *x;
  }
  int main() {
    int a[6] = {9,7,5,2,4,11};
    int b=2;
    int c=10;
    b=f(a+1, &c, b+1);
    printf("%d %d\n", b,c);
    }
    
