#include "dice.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> //rand srand
#include <time.h> // time

int main(void)
{
  int wins = 0, loses = 0;
  char ch;
  srand ((unsigned) time (NULL));//put seed here; just creat a seed once
 while(1)
 {
    if (play_game())
    {
      printf ("You win!\n");
      wins ++;
    }
    else
    {
      printf ("You lose!\n");
      loses ++;
    }
    printf ("\nPlay again?\n\n");
    ch = getchar();
	getchar(); //get newline : but if input yy?
	if (ch != 'y' && ch != 'Y') break;
  } 
  printf ("Wins: %d	  Loses: %d", wins, loses);

  while (1);
  return 0;
}

