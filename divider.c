#include <stdio.h>

/* a program that divides the first input number by the second input number */

  int main (void)
{
  float value1, value2;  /* initializes the variables */

  printf("Enter two values to be divided.\n");  /* asks for two numbers to be entered */
  scanf("%f  %f", &value1, &value2);  /* assigns the variables to the numbers entered */

  if (value2 == 0)  /* tests the second number so it is not dividing by zero */
		printf("Please enter a positive number.");
	  
  printf("The dividend is %.3f\n", value1 / value2);  /* prints the dividend */

  return 0;
  }
