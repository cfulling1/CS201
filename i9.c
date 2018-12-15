#include<stdio.h>
int main() {
FILE * f = fopen("/u1/h0/sternfl/201/nums", "r"); {
int min;
 min < 21474836477;
int num;
while (fscanf(f, "%d", &num) > 0)
  if (num<min)
    min=num;
    printf("%d\n", min);
    }
}

