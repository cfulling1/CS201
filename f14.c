int myStrcmp(const char *s1, const char *s2)
{
for(int i=0; ; i++)
    {
    if (s1[i] != s2[i])
      {
      if (s1[i] < s2[i])
        return -1;
      else
        return 1;
     }
    if (s1[i]==0)
      {
      return 0;
      }
   }
}
