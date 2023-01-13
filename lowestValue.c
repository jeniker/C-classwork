#include <stdio.h>
#define MAX3(a,b,c) ( a > b && a > c) ? a : (b > a && b > c) ? b : (c > b && c > a) ? c

//program to find the lowest value of three values

int main (void)
{

  int result;
  result = MAX3 (7,10,6);
  printf("%i \n", result);

  result = MAX3(16,84,47);
  printf("%i \n", result);

  return 0;

}

//this program returns and error 'undefined reference to main' and the semi-colons at the end of result = MAX3(7,10,6); and the same line with 16,84,47 is the problem.
