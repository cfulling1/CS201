int sumOddsLess(int n) {
  int s=0;
  int x=-1;
  int i;
  for(i=0; i<n; i++) {
    x=x+2;
     if (x<n)
      s=s+x;
  }
  return s;
}
