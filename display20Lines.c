#include <stdio.h>

//this program displays 20 lines of a file at a time, asking user input to
//continue by entering any character except 'q' to quit the file

int main (void)
{
  char inName[64];
  FILE *in;
  int c;
  int  x;

  //get file from user

  printf("Enter the name of the file to be opened.\n");
  scanf("%63s",inName);

  //opens file

  if ( (in = fopen (inName, "r")) == NULL )  {
    printf("Can't open %s for reading.\n");
    return 1;
  }

  //prints file to standard output 20 lines at a time

  
  fprintf(stdout, inName, c < 20);
  printf("Enter any key to continue, or enter 'q' to exit.\n");
  scanf("%i", &x);

  if ( x == 'q') {
    exit ();
  }
  else  {
      fprintf(stdout, inName, c < 40);
  }

  return 0;

    }

//the exit function is not correct
