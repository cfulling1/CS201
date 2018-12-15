#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//build the linked list
   //get the name
   //put the name into the box
   //put the box into the linked list
//print out the content of the linked list
 
struct box {
  char data[20];
  struct box *next;
};

void prt(struct box *p) {
   while (p) {
     printf("%s\n", p->data);
     p = p->next;
   }
}

//make a box
//the list will always be sorted alphabetically
void alphaInsert(char *name, struct box **phead) {
  printf("start alphaInsert\n");
  struct box *prev = 0;
  struct box *curr = *phead;
  while (curr &&  strcmp(name, curr->data)>0) {
     prev = curr;
     curr = curr->next;
  }
  struct box *nb = malloc(sizeof(struct box));
    //nb holds the address of the new piece of memory
  strcpy(nb->data, name);
  //insert the box into the list
  if (prev) {
    nb->next = curr;
    prev->next = nb;
  }
  else {

    printf("start alphaInsert %s\n", nb->data);
    nb->next = curr;
    *phead = nb;
  }
}

int main() {
  struct box *head = 0;
  char name[20];
  while ( fgets(name,20,stdin) ) {
    alphaInsert(name, &head);
    prt(head);
  }
  
}

