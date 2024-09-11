/*
    Topic : Program to print sum of individual digits of a N digit number
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Using the concept of while loop and % operator we find each
                 digit of a N digit number and then sum them.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("enter a +ve integer : "); 
    scanf("%d",&n);
    while(n>0)  // checks the condition
    {
        sum=sum+n%10;   // sum + remainder
        n=n/10;
    }
    printf("sum of individual digits of a positive integer is %d",sum); 
    return 0;
}