#include <stdio.h>
//sort function from chapter 7 program 7.12
int main (void)
{  //initializes the array and values
  int i;
  int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
		   44, -3, -9, 12, 17, 22, 6, 11 };
  void sort (int a[], int n);
  
  //prints the array prior to sorting
    printf("The array before the sort:\n");
  for (i = 0; i < 16; ++i){
  printf("%i,", array[i]);
  }
 
  //sends the array to the sort function 
  sort (array, 16);

  //prints the array after the sort
  printf("\n\nThe array after the sort:\n");

  for ( i =0; i < 16; ++i)  {
    printf ("%i ", array[i]);
  }

  printf("\n");

  return 0;
}

void sort (int a[], int n)
{
  int *aptri = a,  *aptrj = a, *ptrtemp = 0; //sets pointer values
  int * const arrayEnd = a + n;  //sets end value

  for ( aptri = a; aptri < arrayEnd; ++aptri)  {  //outer iteration of i
    for ( aptrj = aptri +1; aptrj < arrayEnd; ++aptrj)  { //inner iteration of j
      if (*aptri > *aptrj)  {  //compares the values of the pointers
	*ptrtemp = *aptri;  //puts the higher value in temp
	*aptri = *aptrj;   //puts the lower value in i
	*aptrj = *ptrtemp;  //puts the higher value in j
      }
    }
  }
}


//This program gives the error "Segmentation fault (core dumped)
