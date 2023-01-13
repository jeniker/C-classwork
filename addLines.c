#include <stdio.h>
//this program mixes two text files by printing one line each until the end of each file.

int main (void)
{

  char aName[128], bName[128], dName[256];;
  FILE *a, *b, *d;
  int c,i;

  //get files from user

  printf("Enter the name of the file to be mixed.\n");
  scanf("%127s", aName);
  printf("Enter the name of the second file to be mixed.\n");
  scanf("%127s", bName);
  printf("Enter the name of the file to be created.\n");
  scanf("%127s", dName);
  //open each file

  if ( (a = fopen (aName, "r")) == NULL )  {
    printf("Can't open %s for reading.\n", aName);
    return 1;
  }

  if ( (b = fopen (bName, "r")) == NULL )  {
    printf("Can't open %s for reading.\n", bName);
    return 2;
  }

  if ( (d = fopen (dName, "w")) == NULL )  {
    printf("Can't open %s for writing.\n", dName);
    return 3;
  }

  //copy a and b using alternating lines

  for (i = 0; i < 128; ++i) {
    while ( c != '\n'){
      c = getc(a);
      putc(c, d);
         while (c != '\n') {
           c = getc(b);
           putc(c,d);
    }
   }
  }
    
  //close open files
  fclose (a);
  fclose(b);
  fclose(d);

  printf("The new file has been created.\n");

  return 0;

}
//this program only writes the first line of the second file to be mixed. I think I need to change
//the new file to append in the loop.

  
  
  
