#include <stdio.h>
/* this program calculates the average of an array with 10 values*/
int main (void)

{
 
  int i, number;   /* initialize varialbes */
  int numtotal = 0;
  float average;

  printf("Enter 10 numbers\n"); /* asks for 10 values */

    for (i = 1; i <= 10; ++i) {
    
      scanf("%i", &number);

      numtotal = numtotal + number; /* sums all the values entered */
}

    average = (float) numtotal / 10;
    printf("The average of your numbers is %2f\n", average); /* prints the average */

    return 0;
}
