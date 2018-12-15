#include<stdio.h>
int main() {

int freq[10000]={0};
int x;
FILE *fp = fopen("/u1/h0/sternfl/201/nums", "r");
while(1==fscanf(fp, "%d", &x))
  freq[x]++;

