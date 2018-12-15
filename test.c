int over(int top) {
int s=0;
int i;
int x=-1;

for(i=0; i<top; i++) {
  if(s>top)
    return x;
  else {
    x=x+2;
    s=s+x;
    }
  }
}
