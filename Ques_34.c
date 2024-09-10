/*
    Topic : Program to print Fibonacci series
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user any arbitrary number and then
    printing its table using loops.
*/

#include <stdio.h>

int main() {

  int i, n;
  int first = 0, second = 1;
  int nextTerm = first + second;
  printf("Enter the number of terms : ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", first, second);
  for (i = 3; i <= n; ++i)
   {
    printf("%d, ", nextTerm);
    first = second;
    second = nextTerm;
    nextTerm = first + second;
   }

  return 0;
}
