#include <stdio.h>
//the first part of this program makes change from a dollar

int main (void)
{
  int cost;
  void makeChange (int cost); //function to make change with a penny
  void twoCents (int change); //function to make change with a two cents piece
  int noChange (int values[99]); //array to send to function to produce a list
  int i;                         //of numbers that can't make change without a penny
                                 //it does not work
  int array [99]; //fills array with numbers from 1 to 99
  for ( i = 0; i <= 99; ++i) {
    array[i] = i;
  }

  printf("enter the cost between 1 and 99 cents.\n"); //get cost from user
  scanf("%i", &cost); 
  printf("Change when using quarters, dimes, nickels and pennies.\n");
  makeChange(cost); //sends cost to function for making change with pennies
  printf("Change when substituting a two cent coin for a penny.\n");
  twoCents(cost); //sends cost to function for making change without pennies
 
  printf("The numbers that can't make change without a penny are: %i\n", noChange (array));
  //this function does not work- it hangs in the middle. it should return a list
  //of amounts 
  return 0;
}

void makeChange (int cost)
{
  int quarters = 25;
  int dimes = 10;
  int nickels = 5;
  int pennies = 1;
  int back = (100 - cost);

  quarters = back / 25; //gets number of quarters
  printf("Number of quarters: %i \n", quarters);
  back = (back % 25); //makes new value without quarters
  dimes = back / 10; //gets number of dimes
  printf("Number of dimes: %i \n", dimes);
  back = (back % 10); //makes new value without dimes
  nickels = back / 5; //gets number of nickels
  printf("Number of nickels: %i \n", nickels);
  pennies = back % 5; //gets number of pennies
  printf("Number of pennies: %i \n", pennies);


 
}

void twoCents (int cost)
{  //same function as makeChange except with a two cent piece
   int quarters = 25;
  int dimes = 10;
  int nickels = 5;
  int twofer = 2;
  int back = (100 - cost);

  quarters = back / 25;
  printf("Number of quarters: %i \n", quarters);
  back = (back % 25);
  dimes = back / 10;
  printf("Number of dimes: %i \n", dimes);
  back = (back % 10);
  nickels = back / 5;
  printf("Number of nickels: %i \n", nickels);
  back = (back % 5);
  twofer  = back / 2;
  printf("Number of twofers: %i \n", twofer);
  back = back % 2;

  if ( back % 2 != 0) { //tests if there is a remainder and can't make change
    printf("%i  is a cost that can't make change without a penny. \n", cost);
  }
    }

int noChange (int values[99])
{  //runs every number from 1 to 99 to list which can't make change without a penny
  int i, temp, newTemp, reallyNew;

  for ( i = 1; i <= 99;) {
    if ( values[i] % 25 == 0) //gets rid of numbers that are divisible by 25
      ++i;
    temp = values[i] % 25; //gets new value after quarters
    if ( temp % 10 == 0) //gets rid of numbers that are divisible by 10
      ++i;
    newTemp = temp % 10;  //gets new value after dimes
    if ( newTemp % 5 == 0) //gets rid of numbers that are divisible by 5
      ++i;
    reallyNew = newTemp % 5; //gets new value after nickels
    if (reallyNew % 2 != 0) //tests value for needing pennies
      reallyNew = values[i];
  }
  return reallyNew;  //sends value if it needs pennies to make change
    
}

//this function does not work - it hangs
