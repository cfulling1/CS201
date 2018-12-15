#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct box {
  char data[20];
  box *next;
};

class linkedList {

private:
  box *head;

public:
 
//constructor: no return value it initializes the data in the class
linkedList()  {
  head = 0;
}

void prt() {
  box *p = head;
   while (p) {
     printf("%s\n", p->data);
     p = p->next;
   }
}

//make a box
//the list will always be sorted alphabetically
void alphaInsert(char *name) {
  box *prev = 0;
  box *curr = head;
  while (curr &&  strcmp(name, curr->data)>0) {
     prev = curr;
     curr = curr->next;
  }
  //struct box *nb = malloc(sizeof(struct box));
  box *nb = new box;
    //nb holds the address of the new piece of memory
  strcpy(nb->data, name);
  //insert the box into the list
  if (prev) {
    nb->next = curr;
    prev->next = nb;
  }
  else {
    nb->next = curr;
    head = nb;
  }
}
};

void chop(char *s) {
  for(int i=0; s[i]; i++)
     if (s[i]=='\n') {
         s[i]=0;
         return;
     }
}

int main() {
  linkedList ll;
  linkedList ll2;
  char name[20];
  while ( fgets(name,20,stdin) ) {
    chop(name);
    ll.alphaInsert(name);
    ll.prt();
  }
  
}

