#include <stdio.h>
/* this program takes in ten numbers and sorts them from lowest to highest. */
int main (void)
{
  int num[11];   /* initializes variables */
  int i, j, temp;  /* set "num" array to one more than the total numbers */

  printf("Enter 10 numbers.\n");  /* asks for the ten numbers to sort */

  for ( i=0; i <10; ++i)

    scanf("%d", &num[i]); /* places the ten numbers into the array "num" */

  for (i = 8; i >= 0; --i)  {  /* returns the iteration at the end of the array */
    for ( j = 0; j <= i; ++j) {  /* 8 could be replaced by the total numbers -2 */
      if (num[j] > num[j+1]) {  /* j starts the iteration at the lowest position */
	temp = num[j];       /* and swaps the values around to order lowest to highest */
	num[j] = num[j+1];   
	num[j+1] = temp;
      }
    }
  }
  printf("\n");    /* prints a line between the input and the output */
  for (i = 0; i < 10; ++i)
    printf("%2d\n", num[i]);   /* makes two spaces for double digit numbers and prints output */
}
