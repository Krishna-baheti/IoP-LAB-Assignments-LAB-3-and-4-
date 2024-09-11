/*
    Topic : Program to print reverse of a number 
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user any arbitrary number and then
                  reversing it using while loop and % operator.
*/

#include <stdio.h>

int main()
 {
  int n, reverse = 0, remainder, original;

  printf("Enter an integer: ");
  scanf("%d", &n);

  original = n;  

  while (n != 0) 
  {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  if (original % 10 == 0) 
  {
    printf("Reversed number = %d", reverse);
    
    while (original % 10 == 0)
     {
      printf("0");
      original /= 10;
    }
  }
   else 
  {
    printf("Reversed number = %d", reverse);
  }

  return 0;
}