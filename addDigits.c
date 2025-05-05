#include <stdio.h>

int main (void)  /* program to add the digits of a number to get the digitsum */

{
  int number = 0;  /* initializes variables */
  int sum = 0;
  int right_digit = 0;

  printf("Enter your number:\n");  /* asks the user for a number */
  scanf("%i",  &number);

  while ( number != 0)  {   /* tests the number as non-negative and non-zero */
    right_digit = number % 10;   /* separates the lowest value */
    sum = right_digit + sum;     /* adds the lowest values for each loop */
    number = number / 10;        /* sets the number to go through the loop for the next digit */
    
  }
  
  printf("The sum of your number is %i\n", sum);

  return 0;
}

