
#include<stdio.h>

int main() {

int curr;
FILE *f =fopen("/u1/h0/sternfl/201/nums", "r");
int prev;
fscanf(f, "%d", &prev);
int count=1;
  while(1==fscanf(f, "%d", &curr))
      {
          if(prev>curr)
                  count++;
                        }
                        fclose(f);
                        printf("%d\n", count);
                        }
