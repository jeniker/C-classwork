#include <stdio.h>

//These three functions work to sort an array in either descending or ascending order

void  ascendingOrder (int values[5])  //function to sort in ascending order
    {
      int i, j, temp;
     
      for (i = 4; i >= 0; --i) {  //starts the iteration of the array from end to beginning
	for ( j = 0; j < i; ++j)  {  //inside loop of array from beginning to end
	  if ((values[j]) > (values[j+1]))  {  //tests the values of inside loop
	    temp = values[j];    //moves the larger number to temp
	    values[j] = values[j+1];  //moves the smaller number to the lower place in array
	    values[j+1] = temp;  //moves the larger number to the higher place in array
      }
    }
  }

    }

void descendingOrder (int values[5])  //function to sort in descending order
{
  int i, j, temp;

  for ( i = 0; i < 5; ++i)  {  //starts the iteration of the array from beginning to end
    for ( j = i+1; j < 5; ++j)  {  //inside loop of array from second element to end
      if ( values[i] < values[j]) {  //tests the values of each loop against each other
	temp = values[i];  //puts the lower value in temp
	values[i] = values[j];  //moves the higher number to the lower place in array
	values[j] = temp;    //moves the lower number to the higher place in array
	}
      }
    }
     

}

int  main (void)
{

  int arr[5] = {199, 216, 311, 418, 275}; //variable array and values
  void ascendingOrder (int values[5]); 
  void descendingOrder ( int values[5]);
  int  j, n;

  //Allows the user to decide the order of the sort
  printf("Enter 0 for ascending order and 1 for descending order:\n");
  scanf("%i", &n);
  printf("Your choice is %i which is ", n);
  
  if ( n == 0)   //prints the choice
    printf("Ascending order.\n");
  
  else   //prints the choice
    printf("Descending order.\n");
  
  

  if ( n == 0 )  //goes to the function for ascending order
    ascendingOrder (arr);
  
    
  if ( n == 1)  //goes to the function for descending order
    descendingOrder (arr);

  
    
  for ( j = 0; j < 5; ++j)  //prints the array in the chosen order
    printf("%d  \n", arr[j]);
  
  
  return 0;
} 

    

    
