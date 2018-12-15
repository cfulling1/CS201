int over(int top) {
  int s=0;
  int x=-1;
  int i;
  for(i=0; i<top; i++) 
   {
   if (s>top)
     return x; 

   else 
     {
     x=x+2;
     s=s+x;
     }
   }
}
