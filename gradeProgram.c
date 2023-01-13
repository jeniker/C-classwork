#include <stdio.h>
//This is the student and grade list for this program
  struct introToC
  {
      	int studID;
        int grades[5];
  };
     
  const struct introToC  students[10]  =
    { { 6352, {86, 95, 90, 92, 96}}, {3691, { 95, 88, 91, 94, 95}},
      { 4557, {82, 88, 94, 86, 95}}, {5432, { 75, 88, 78, 90, 87}},
      { 6147, {90, 88, 85, 89, 92}}, {7259, { 95, 92, 90, 94, 98}},
      { 2127, {83, 87, 94, 90, 92}}, {8593, { 71, 76, 80, 86, 82}},
      { 4438, {75, 72, 85, 87, 90}}, {3651, { 80, 87, 88, 76, 84}} };



void  getStudentAverage (void ) //this function asks for the student
                           //ID and them prints the student's average
 
{
  int  i, num, average;
  
  while (num != 00)  { 
  printf("Enter the 4 digit student ID to obtain the student's \
 average, or enter 00 to quit.\n"); //obtains the student ID from user
 scanf("%i", &num);

 for (i = 0; i < 10; ++i)   //calculates the student's average
   if ( num == (students[i].studID)) 
     average = (((students[i].grades[0]) + (students[i].grades[1]) + (students[i]. grades[2]) + (students[i]. grades[3]) + (students[i].grades[4])) /5);
 printf("The student ID %i has an average of %i\n", num, average);
 if (num == 00)
   printf("Goodbye.\n");
}
 }
//The one error I can't figure out is how to stop it from printing
//an average for the 00 to end the loop.
 
void highScore (void)   //this function finds the highest grade
                      //for each assignment, the midterm and final
{
  int i, j;
  int temporary[10];
  int max, next;

  for (j = 0; j < 5; ++j)  {  //starts iteration for each grade set
    
    for (i = 0; i < 10; ++i)  {  //starts iteration for each student ID 
     	   temporary[i] =  students[i].grades[j];
    }          //this puts the grades in a temporary array for sorting
       
                   
	   max = temporary[0];  //sorts the temporary array
	   for (i = 1; i < 10; i++)  {  //for the highest value
         if (temporary[i] > max) {
	     max = temporary[i];
	 next = i+1;
	 }
       }
	   //prints the correct high score for each category
     if (j == 0)
       printf("The high score for Homework is %i \n", max);
     if (j == 1)
      printf("The high score for Projects is %i \n", max);
     if (j == 2)
      printf("The high score for Tests  is %i \n", max);
     if (j == 3)
      printf("The high score for the Midterm is %i \n", max);
     if (j == 4)
      printf("The high score for the Final is %i \n",max);
   
  	      }
      }


int main (void) //This program prints the student ID and grades
  //-finds the average grade for each assignment, midterm and final
  //and prints the average grade of a selected student
{
  void getStudentAverage (void);
  void highScore (void);
  
  int i;

  printf("Student ID:     Average or Grade:\n");
  printf("__________      Homework  Projects  Tests  Midterm  Final\n");

  for ( i = 0; i < 10; ++i) {
  printf(" %i             %i       %i       %i      %i         %i\n",
	 students[i].studID, students[i].grades[0],
	 students[i].grades[1], students[i].grades[2],
	 students[i].grades[3], students[i].grades[4]);
  }

 
  highScore();

  getStudentAverage();


     return 0 ;
}
