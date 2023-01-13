#include <stdio.h>
/* this program displays the numbers 1 to 10 from highest 
     to lowest */

int main (void)
{
  int num, step;  /* assigns the variables num and decrement size */

  step = -1;    /* step size */
  num = 10;   /* initial value of num */

  while (num > 0) {        /* tells the program to stop at 1 */
    printf("%d\n", num); /* tells the program to display the
				           number */
    num = num + step;     /* decreases the number by one */
  }
  return 0;
    }
