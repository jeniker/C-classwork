#include <stdio.h>
#define IS_LOWER_CASE(x) ( ((x) >= 'a')  &&  ( (x) <= 'z') )
#define TO_UPPER(x)  (IS_LOWER_CASE(x) ? (x) - 'a' + 'A' : (x)  )

//this program copies a file into another file, and then puts the new file into capitol letters
//it is mainly program 15.5 and the example from chapter 12 macros for lower case and upper case

int main (void)
{
  char inName[64], outName[64];
  FILE *in, *out;
  int c;
 
  //this gets file name from the user

  printf("Enter the name of the file to be copied: ");
  scanf("%63s", inName);
  printf("Enter the name of the output file: ");
  scanf("%63s", outName);

  //opens input and output files

  if ( (in = fopen (inName, "r")) == NULL )  {
  printf("Can't open %s for reading.\n", inName);
  return 1;
  }

  if ( (out = fopen (outName, "w")) == NULL )  {
    printf("Can't open %s for writing. \n", outName);
    return 2;
  }

  //copy in to out

  while ( ( c = getc (in) ) != EOF )
    putc (c,out);

  //change lowercase to uppercase
  
  while ( (c =getc(out) ) != EOF )
    TO_UPPER(putc (c, out));

  //close open files

  fclose (in);
  fclose (out);

  printf("File has been copied.\n");

  return 0;

}
  
//TO_UPPER does not work. Copy in to out works. 
