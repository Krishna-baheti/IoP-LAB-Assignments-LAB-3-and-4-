/*
    Topic : Program to check whether a nmuber is armstrong or not
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Finding the sum of cubes of digits of a number and check
                  whether its equal to original number
*/

#include<stdio.h>

int main()
{
  int n,r,sum=0,temp;    
  printf("Enter the number : ");    
  scanf("%d",&n);    
  temp=n;    
  while(n>0)    
  {    
     r=n%10;    
     sum=sum+(r*r*r);    
     n=n/10;    
  }    
  if(temp==sum)    
  printf("armstrong  number \n");    
  else 
  {
    printf("not armstrong number \n"); 
  }   
return 0;  
}  
