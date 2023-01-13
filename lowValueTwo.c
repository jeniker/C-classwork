#include <stdio.h>
#define MIN(a,b)  a < b ? a : b 

//program to find the lowest value of two values

int main (void)
{
  int result;
  result  = MIN(100,200);
  
  printf("%i \n", result);

  result = MIN(95,27);
  printf("%i \n",result);

  return 0;
}



 
  
