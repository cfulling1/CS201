#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

const int WDSZ=20;
const int BUMP='A'-'a';

void convertToUpper(char *word) {
  int i;
  for(i=0; word[i]; i++)
    {
    if(word[i]>='a' && word[i]<='z')
      {
      word[i]=word[i]+BUMP;
      }
   }
}

void mkTem(char *template, const char *word) {
  int i;
  for(i=0; word[i]; i++)
    {
    template[i]='-';
    }
}

int dashIn(char *template) {
  int i;
  for(i=0; template[i]; i++)
    {
    if(template[i]=='-')
      {
      return 1;
      }
    }
    return 0;
}

int loopNotDone(char *template, int wrongCount) {
  int i;
  for(i=0; template[i]; i++) 
    {
    if(dashIn(template)==1 && wrongCount<7)
      {
      return 1;
      }
    else
      {
      return 0;
      }
    }
}

int getGuess() {
  int localGuess;
  do
    localGuess=getchar();
  while(localGuess==' ' || localGuess=='\n' || localGuess=='\t'); 
  return localGuess;
}

int guessIn(int guess, const char *word) {
  int i;
  for(i=0; word[i]; i++)
    {
    if(guess==word[i])
      {
      return 1;
      }
    }
    return 0;
}

int goodGuess(int guess, const char *word, const char *template) {
  if(guessIn(guess, word)==1 && guessIn(guess, template)==0)
    {
    return 1;
    }
  return 0;
}

void replace(int guess, const char *word, char *template) {
  int i;
  for(i=0; word[i]; i++)
    {
    if(guess==word[i])
      {
      template[i]=guess;
      }
    }
}

void chop(char *word) {
  int i;
  for(i=0; word[i]; i++) 
    {
    if(word[i]=='\n')
      { 
      word[i]=0;
      return;
      }
   }
}

int main() {
  char word[WDSZ];
  char template[WDSZ];
  int wrongCount=0;
  int guess;

  printf("Player 1: enter a word\n");
  fgets(word, WDSZ, stdin);
  chop(word);
  convertToUpper(word);
  system("clear");
  mkTem(template, word);
    while(loopNotDone(template, wrongCount))
      {
      printf("%s\n", template);
      printf("Player 2: guess a letter\n");
      guess=getGuess();
      guess=toupper(guess);
      if(goodGuess(guess, word, template)==1)
        {
        replace(guess, word, template);
        }
      else
        {
        wrongCount++;
        printf("Wrong count=%d\n", wrongCount);
        }
      }
   if (wrongCount==7)
      {
      printf("Player 2 loses! The correct word was: %s.\n", word);
      }
   else
      {
      printf("Congratulations Player 2, you win! The word was: %s.\n", word);
      }
}
