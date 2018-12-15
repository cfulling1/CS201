char  *myRindex(const char *s, int c)
{
int i=0;
char *pos=(char *)(-1);
  while(s[i]!=0)
    {
    if(s[i]==c)
      pos=(char *)(s+i);
    i++;
    }
  if(pos!=(char *)(-1))
    return pos;
  else
    return 0;
}
