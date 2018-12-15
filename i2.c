#include<stdio.h>
int main() {
int x;
int y;
FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");
int i;
while(1==fscanf(f, "%d", &x))
  y=x;
fclose(f);
printf("%d\n", y);
}
