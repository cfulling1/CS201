int sumFromX(int x, int n) {
  int s=0;
  int i;
  for(i=0; i<n; i++) { 
    s=s+x;
    x=x+1;
  }
  return s;
}
