#include <stdio.h>

int main (void)
//this program returns a string index of the search term if the term is found
{

  int  findString (char source[], char search[]);
  char s1[] = { "thejoker"}; //assigns the source to be searched
  char s2[] = { "joke"}; //assigns the search term
   int n =0;

   if ( findString(s1, s2) >= 0) { //runs the source and search term through the function
     printf("%i \n", n);  //prints the string index where the search term starts in the source
   }
  return 0;
}

int  findString (char source[], char search[])
{
  int i, j, x;
  for (i = 0; source[i] != '\0'; ++i) {  //starts the iteration for the source characters
    for ( j=i, x=0; search[x] != '\0' && source[j] == search[x]; ++j, ++x) 
      ;                                  //iterates through until the search term matches the source
    if (x > 0 && search[x] == '\0')
      return i;  //if the search term matches until the end of it, returns the index 
  }
  return  -1;  //else it returns negative 1
}


/* This program returns 0. I can not figure out what the problem is as the iteration seems
   to work correctly. I ran out of time to keep working on it. */



 
