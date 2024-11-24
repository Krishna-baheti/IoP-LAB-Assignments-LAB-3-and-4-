/*
    Topic : Program to print Fibonacci series
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include <stdio.h>

int main()
{
  printf("Enter the number of terms : ");
  int n, first = 0, second = 1, next;
  scanf("%d",&n);
  for(int i = 1; i <= n; i++) {
    printf("%d ",second);
    next = first + second;
    first = second;
    second = next;
  }
  return 0;
}
  

  
