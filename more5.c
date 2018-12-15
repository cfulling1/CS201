#include<stdio.h>
int main() {

int freq[10000]={0};
int x, i, index;
int max=0;
FILE *fp = fopen("/u1/h0/sternfl/201/nums", "r");
{
while(1==fscanf(fp, "%d", &x))
  freq[x]++;
for(i=0; i<10000; i++)
  if (freq[i]>max)
    {
    max=freq[i];
    index=i;
    }
  }
  printf("%d\n", index);
}
