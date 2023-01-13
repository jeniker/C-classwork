#include <stdio.h>

//this program calculates a course grade for "Intro to C programming"

int main (void)
{
  int grades[24];  //array to hold all points

  int quiz; //categories of assignments
  int project;
  int exam;
  int exam_projects;
  int i, sum = 0;
  int finalGrade;

  //instructs user to enter the points earned for each assignment
  
  printf("Enter your grades for each item with the points earned.");
  printf("Enter 10 grades for quizzes 1 to 10: \n");

  for ( i = 0; i < 10; ++i){  //adds these grades to the array
  scanf("%i", &quiz);
  grades[i] = (quiz);
  }

  printf("Enter 10 grades for projects 1 - 10: \n");

  for ( i = 10; i < 20; ++i)  {
    scanf("%i", &project);
    grades[i] = (project);
  }

  printf("Enter 2 grades for the mid-term and the final exam: \n");

  for ( i = 20; i < 22; ++i)  {
    scanf("%i", &exam);
    grades[i] = (exam);
  }

  printf("Enter 2 grades for the mid-term and final projects: \n");

for ( i = 22; i < 24; ++i)  {
  scanf("%i", &exam_projects);
  grades[i] = (exam_projects);
 }

 printf("Your points entered are: \n"); //prints grades to check program
  for ( i = 0; i < 24; ++i)  {
    printf("%i \n", grades[i]);
  }
  
    for ( i = 0; i < 24; ++i) {  //sums all of the points earned
      sum += grades[i];
    }
    printf("%i \n", sum);  //prints sum to check program

    finalGrade = (sum / 1000);  //divides points by 1000 for final grade
    printf("Your final grade is %i \n", finalGrade / sum);
    //this does not work right
 
    //converts grade to a letter- doesn't work because final grade is wrong

    if (finalGrade <= 100 || finalGrade >= 95) {
      printf("Your final grade is A.\n");
    }
    else if (finalGrade <= 94 || finalGrade >= 93) {
      printf("Your final grade is A-.\n");
    }
    else if (finalGrade <= 92 || finalGrade >= 91)  {
      printf("Your final grade is B+.\n");
    }
    else if (finalGrade <= 90 || finalGrade >= 87) {
      printf("Your final grade is B.\n");
    }
    else if (finalGrade <= 86 || finalGrade >= 85)  {
      printf("Your final grade is B-.\n");
    }
    else if (finalGrade <= 84 || finalGrade >= 83)  {
      printf("Your final grade is C+.\n");
    }
    else if (finalGrade <= 82 || finalGrade >= 79)  {
      printf("Your final grade is C. \n");
    }
    else if ( finalGrade <= 78 || finalGrade >= 77) {
      printf("Your final grade is C-.\n");
    }
    else if (finalGrade <= 76 || finalGrade >= 75)  {
      printf("Your final grade is D+.\n");
    }
    else if (finalGrade <= 74 || finalGrade >= 70)  {
      printf("Your final grade is D.\n");
    }
    else {
      printf("Your final grade is F. \n");
    }
	
	    return 0;

}
    
  

    
  
  
