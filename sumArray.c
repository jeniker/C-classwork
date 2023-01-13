#include <stdio.h>

int calcSum (int values[8])  //this function finds the sum of the array
                             //that is defined in the function main
{
  int i;
  int sum = 0;

  for ( i = 0; i < 8; ++i)  {  //This starts the iteration to add the items in the array
      sum  += values[i];
         }
  return sum;  //  This tells the function to return the sum

	       }


int main (void)
{
  // This function defines the array and instructs to run the function calcSum
  // Then it prints the sum of the items in the array
 

  int  arraySum[8] = {43, 17, 84, 53, 62, 48, 91, 76};
  int calcSum (int values[8]);
  
  printf("The sum of the array is %i\n", calcSum (arraySum));  //prints the results

  return 0;
}
