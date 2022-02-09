/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

//function main begins program execution
int main() {

  //declaring variables
  int mark1, mark2;
  float avg;

  //taking the two marks as inputs
  printf("Enter mark1: ");
  scanf("%d", &mark1);
  
  printf("Enter mark2: ");
  scanf("%d", &mark2);

  //calculating thea average
  avg = (float)((mark1 + mark2) / 2);

  //displaying the average
  printf("Average: %.2f", avg);

  return 0;
  
}//end function main

