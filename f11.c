int myStrlen(const char *s) {
  int i=0;
  while(*(s+i) != 0) //'!=' = is not equal
    i++;
  return i;
}
