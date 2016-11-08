#include "dice.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> //rand srand
#include <time.h> // time

int roll_dice (void)
{
  int dice1, dice2, sum;
  dice1 = rand()%6 + 1;
  dice2 = rand()%6 + 1;
  sum = dice1 + dice2;
  return sum;
}

bool play_game (void)
{
  int sum;
  int point;
  sum = roll_dice();
  printf ("You rolled: %d\n", sum);
  if (sum == 7 || sum == 11)
  {
    return true;
  }
  else if (sum == 2 || sum == 3 || sum == 12)
  {
    return false;
  }
  else
  {
    point = sum;
    printf ("Your point is %d\n", point);
  }

while(1)
{
  sum = roll_dice();
  printf ("You rolled: %d\n", sum);
  if (sum == point || sum == 7) break;
} 

if (sum==point) return true;
else if (sum==7) return false;

}
