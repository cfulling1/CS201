#include<stdio.h>
#include<string.h>

char strSpace[1000000];
char *sp = strSpace;  // the free pointer

struct box {
  char *wp;
  int count;
  box *next;
};

#define TBLSZ   1009

unsigned h(char *s) {
  unsigned ans=0;
  while (*s)
     ans = ans<<1 ^  *s++;
  return ans%TBLSZ; 
} 

box *table[TBLSZ];


int isletter(int c) {
  if (c>='a' && c<='z') return 1;
  if (c>='A' && c<='Z') return 1;
  return 0;
}

#define BUMP 'a' - 'A'

//word is letters

//returns the new value for the free pointer
char *getWord(FILE *ifile, char *sp) {
  //char *sp0 = sp;
  int c ; 
  //loop until EOF or we get a letter
  while (EOF!=(c=fgetc(ifile)) && !isletter(c))
    ;
   if (c==EOF) return sp;  //no change in f
   //got a letter
   do {
        if (c>='a' && c<='z')
           *sp++ = c;
        else if (c>='A' && c<='Z')
           *sp++ = c + BUMP;
        else {
          *sp++ = 0;
          //printf("%s\n", sp0);
          return sp;

        }
        c = fgetc(ifile);
   } while(1);
}

//return the length of the list at index indx.
int lkLstLength(int indx) {
  int len = 0;
  box * head = table[indx];
  box * curr = head;
  while (curr) 
  {
     curr = curr->next;
     len++;
  }
  return len;
}

box *search(int indx, char *s) {
  box *head = table[indx];
  box *curr = head;
  while (curr!=0 &&  strcmp(s,curr->wp)!=0)
    curr = curr->next;
  return curr;
}


int main() {

  FILE *ifile = fopen("/u1/junk/shakespeare.txt" , "r");
  char *sp1;
  int k=0;
  int count1=0;
  while (sp != (sp1=getWord(ifile, sp)) ) {
     //printf("%s\n", sp);
     box *curr = search(h(sp),sp);
     if (curr) {
       curr->count++; 
       //no need to up date sp
      }
      else {//curr=0
         //new box 
         box *nb = new box;
         nb->wp=sp;
         int indx = h(sp);
         sp = sp1;
         nb->count=1;
         nb->next = table[indx];
         table[indx] = nb;
        k++;
      }
  }
  printf("%d\n", k);

/*
  int i;
  for(i=0; i<200; i++)
    if (strSpace[i]) 
      printf("%c", strSpace[i]);
    else 
      printf("0");
  printf("\n");
*/
}
