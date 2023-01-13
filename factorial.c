#include <stdio.h>
/* program to generate a list of the factorial numbers from 1 to 10 */

int main (void)
{
  int n, factorial; /* variables named */
  printf("Table Of Factorials\n\n");  /* heading of table */
    printf("Number--Factorial\n");
  printf("__  _________\n");
  factorial = 1;    /* sets initial value of factorial */
  n = 1;             /* sets initial value of n */
    
    for( n = 1; n <= 10; ++n) {   /* sets loop for 1 to 10 */
    factorial = n * factorial;
    printf("%2i     %2i\n",n, factorial);  /* prints value for 1- 10 */
}
  return 0;

  }
