#include<stdio.h>

int main() {
FILE* f = fopen("/u1/h0/sternfl/201/nums", "r");

    int max = -2147483648;     
    int num;
    while (fscanf(f, "%d", &num) > 0)
      if (num > max)
        max=num;    
    printf("%d\n", max);
}
