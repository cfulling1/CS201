#include<stdio.h>

unsigned long h(const char *s) {
  unsigned long ans=0;
  while (*s)
    ans=ans<<1 ^ *s++;
  return ans;
  }
  
  int main() {
  printf("%d\n", h("CAT"));
}
