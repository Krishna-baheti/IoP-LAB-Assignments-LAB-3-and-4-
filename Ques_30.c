/*
    Topic : Program to print reverse of a number 
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include <stdio.h>

int main()
 {
   printf("Enter the number \n");
   int num, sum = 0, rem;
   scanf("%d",&num);
   while(num > 0)
   {
    rem = num % 10;
    sum = sum*10 + rem; // critical for reversing
    num = num/10;
   }
   printf("%d",sum);
   return 0;
 }