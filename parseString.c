#include <stdio.h>

// This program parses a string from a designated start point and length

int stringLength (char source[])  //function to obtain string length
{
  int n = 0;
 
  while  (source[n] != '\0' )
    ++n;
 
  return n;
 
}


char subString (char source[], int start, int count, char result[])
//function to parse the string source at the start point for the length of count
{
  int i;

    
  for  (i = start; i <= count;  ++i)    //copies the shortened string to result       
       result[i] = source[i];
     
        result[i+1]= '\0';
	return result[i];  //returns result to main
    
}

int main (void)
//designates the source string, starting character and length to parse, then prints result
 {
   char subString ( char source[], int start, int count, char result[]);
   int  stringLength (char source[]);
    
   char s1[21] = "thedarkknighttrilogy"; //source string 
   char partString[21];  //place holder for result
   
   printf("%i \n", stringLength (s1));  //prints string length
   
   subString(s1, 3, 12, partString);
   printf("%s \n", partString); //prints new string
           
  return 0;
	   }
