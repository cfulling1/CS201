#include<stdio.h>
#include<stdlib.h>

int main() {
  srandom(202);
  int i, x;
  int showDoor;
  int prizeDoor;
  int choice;
  int altChoice;
  
  int stayCount=0;
  int changeCount=0;
  
  int count[3];
  for(i=0; i<3; i++)
    count[i]=0;
    
  for(x=0; x<1000; x++) 
    {
    prizeDoor=random()%3;
    choice=random()%3;
    
    for(i=0; i<3; i++)
      if(i!=prizeDoor && i!=choice)   showDoor=i;
    //Monty shows the showDoor
    //"Keep your choice or switch?"
    for(i=0; i<3; i++)
      if(i!=showDoor && i!=choice)   altChoice=i;
    if (altChoice==prizeDoor)  //switches
      changeCount++;
    if (choice==prizeDoor) //stays
      stayCount++;
    }
    printf("Change count = %d, stay count =  %d\n", changeCount, stayCount);
}
