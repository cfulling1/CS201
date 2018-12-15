#include<stdio.h>

int main() {

unsigned long h(char *s) {
  unsigned long ans=0;
  while (*s)
    ans=ans<<1^*s++;
  return ans;
  }
printf("%d", h("hAt"));
}
