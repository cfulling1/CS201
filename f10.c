int over(int top) {
  int s=0;
  int x=0;
  int i;
  int n;
  for(i=0; i<top; i++) 
   {
   if (s>top)
     return x; 

   else 
     {
     x=x+1;
     s=s+x;
     }
   }
}
