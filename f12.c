char *myIndex(const char *s, int c) //s has address of first character in a string
{       //c has 
int i=0;
while (s[i]!=0)
 {
  if(s[i]==c)
     return (char*)s+i; //return value is return address of where code 
    // of c is found in s
  i++;
  }
return 0;
}
