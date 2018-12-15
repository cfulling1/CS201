#include<stdio.h>

int getLetter(FILE *f) {
  while (1) {
    int c = fgetc(f);
    if (c>='a' && c<='z') return c-'a';
    if (c>='A' && c<='Z') return c-'A';
    if (c==EOF) return -1;
  }
}

//original
//int encipher(int ifrmt, int *indx, char *keyword, int length)

//User has to promise to change indx each time he/she uses encipher
int encipher(int ifrmt, int indx, char *keyword) {
   ifrmt += keyword[indx];
   ifrmt %= 26;
   return ifrmt;
}

int main() {
  //get keyword
  //get length of the keyword
  //convert keyword to internal format
  //get clear file name (input file) from the user
  //clrName
  FILE *ifile = fopen("alpha", "r"); //replace alpha with clrName
  FILE *ofile = fopen("cipher", "w");
  int letter;
  char keyword[] ={2,0,1,0}; //keyword converted to internal format
  int length = 3;
  int indx = 0;
  while ( (letter=getLetter(ifile)) >=0) {
     int enLet = encipher(letter, indx, keyword);
     indx++;
     indx %= length;

     fputc(enLet+'A', ofile);
     //fputc(' ', ofile); every 5 letters
     //fputc('\n', ofile); every 5 groups
  }
  fclose(ifile);
  fclose(ofile);
}
