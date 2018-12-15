#include<stdio.h>
int main() {
int x;
int y=0;
FILE *f = fopen("/u1/h0/sternfl/201/nums", "r");
int i;
int k;
while(1==fscanf(f, "%d", &x))
  y++;
fclose(f);
printf("%d\n", y);
}
