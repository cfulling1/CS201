#include<stdio.h>

int main(int argc, char *argv[]) {
  if (argc<2) {
    printf("Missing data name argument\n");
    return 0;
    }
    
  FILE *f = fopen(argv[1], "r");
  int i, x;
  for(i=0; i<10; i++)
    fscanf(f, "%d", &x);
  printf("%d\n", x);
  }
