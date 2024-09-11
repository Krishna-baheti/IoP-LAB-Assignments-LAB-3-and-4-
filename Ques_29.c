/*
    Topic : Program to check whether a number is palindrome or not
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user any arbitrary number and then
                  check if the number from the start is same as the number
                  from the other way around.
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
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   