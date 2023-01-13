#include <stdio.h>



int newGuess (int highNum, int lowNum)
{
  int compGuess;


  compGuess = highNum - ((highNum-lowNum)/2);

  
  return compGuess;

}


int lower (int guess)
{

 guess  = guess - 1;
    
  return guess;
}

int higher ( int guess)
{
  
      guess = guess + 1;
      
  return guess;
}


int main (void)

{
  
  int guess = 0;         //the value of the computer's guess
  int guessCounter = 0;  //the number of guesses the computer has made
  int lowNum = 0;       //the lowest end of the range from player
  int highNum = 0;     //the highest end of the range from player
    int newGuess (int highNum, int lowNum);
  int lower (int guess);
  int higher ( int guess);
  int  answer;

      printf("Set your mind to a specific number (integer).\n");
      printf("Now give me a range from low to high around your number.\n");
      printf("What is the lowest number of your range?\n");
      scanf("%i", &lowNum);
      printf("What is the highest number of your range?\n");
      scanf("%i", &highNum);
      printf("The range is between %i and %i.\n", lowNum, highNum);
	    
  
    guess =  newGuess(lowNum, highNum);
     (++ guessCounter );
  
  
      printf("My guess is %i and this is guess number %i.\n", guess, guessCounter);
      printf("Is this guess too high, too low, or correct?\n");
      printf("Enter 1 for the word high, 2 for the word low, or 3 for the word correct.\n");
      scanf("%i",&answer);
      printf("Your answer is %i \n", answer);

      if (answer == 1) 
	guess = lower(guess);
      

      if (answer == 2) 
        guess = higher(guess);
      

      if (answer == 3)  
	printf("I win!! Game over.\n");
	
    

	  return 0;
}
     
      

	
	
      
