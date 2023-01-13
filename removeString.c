#include <stdio.h>

//This program removes a designated part of a string and returns the shortened string

char removeString ( char source[], int start, int remove, char result[])
//function to remove part of the string for printing to screen  
{
  int i = 0;
  while ( i != '\0'){  //sets condition to run while string exists
  for ( i = 0; i < (start) && i > ((start) + (remove)); ++i) {
    //sets condition to place the contents of source into result, except for the part to remove
    source[i] = result[i];
}
  }    //returns the shortened string
  return result[i];
}


int main (void)

{
  char removeString ( char source[], int start, int remove, char result[]);

  char string1[] = { "thedarkknight"};  //assigns the source string
  char result[20];  //placeholder for the result

  removeString( string1, 3, 4, result);  //sends the source to the function
  printf("%s \n", result);  //prints the resulting shorter string

  return 0;
}

/* this program returns "\220 @" and I ran out of time to figure out why. */
