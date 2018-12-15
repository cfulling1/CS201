#include<stdio.h>
#include<string.h>

const int KWSZ=21;
const int NMSZ=30;

void chop(char *s) {
  int i;
  for(i=0; s[i]; i++)
    {
    if(s[i]=='\n')
      {
      s[i]=0;
      return;
      }
   }
}

int convert(char *keyword) {
  int i;
  for(i=0; keyword[i]; i++)
    {
    if(keyword[i]>='a' && keyword[i]<='z')
      keyword[i]=keyword[i]-'a';
    else if (keyword[i]>'A' && keyword[i]<='Z')
      keyword[i]=keyword[i]-'A';
    }
    return 0;
}

int getLetter(FILE *f) {
  while (1) {
    int c = fgetc(f);
    if (c>='a' && c<='z') return c-'a';
    if (c>='A' && c<='Z') return c-'A';
    if (c==EOF) return -1;
  }
}

int encipher(int ifrmt, int indx, char *keyword) {
   ifrmt += keyword[indx];
   ifrmt %= 26;
   return ifrmt;
}

int main() {
char keyword[KWSZ];
char clrName[NMSZ];
int indx=0;
int letter;
int i=0;
FILE *ofile=fopen("cipher", "w");
  printf("Enter a keyword (%d letters or less):\n", KWSZ-1);
  fgets(keyword, KWSZ, stdin);
  chop(keyword);
  convert(keyword);
  int length=strlen(keyword);
  if (keyword==0)
    printf("Error: 0\n");
  printf("Enter a clear file name:\n");
  fgets(clrName, NMSZ, stdin);
  chop(clrName);
  FILE *ifile=fopen(clrName, "r");
  while((letter=getLetter(ifile))>=0)
  {
    i++;
    if(indx==length)
      indx=0;
    int enLet=encipher(letter, indx, keyword);
    indx++;
    indx %= length;
    fputc(enLet+'A', ofile);
      if(i%5==0)  fputc(' ', ofile);
      if(i%25==0) fputc('\n', ofile);
    }
  fclose(ifile);
  fclose(ofile);
}
