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
printf("Enter a number \n");
int num,sum = 0, rem, temporary;
scanf("%d",&num);
temporary = num;
while(num > 0)
{
    rem = num % 10;
    sum = sum*10 + rem;
    num = num/10;
} 
if(temporary == sum)
{
    printf("Palindrome \n");
}
else
{
    printf("Not Palindrome \n");
}
return 0;  
}   
