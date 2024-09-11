/*
    Topic : Program to check whether a nmuber is armstrong or not
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Finding the sum of cubes of digits of a number and check
                  whether its equal to original number
*/

#include<stdio.h>

int main()
{
  printf("Enter a number \n");
  int num,sum = 0,rem, tem;
  scanf("%d",&num);
  tem = num;
  while(num > 0)
  {
    rem = num % 10;
    sum = sum + rem*rem*rem;
    num = num/10;
  }  
  if(tem == sum)
  {
      printf("Armstrong number \n");
  }
else
  {
    printf("Not an Armstrong number \n");
  }
return 0;  
}  
