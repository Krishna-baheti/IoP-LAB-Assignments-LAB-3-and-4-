/*
    Topic : Program to print sum of individual digits of a N digit number
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter a number \n");
    int num,sum = 0, rem;
    scanf("%d",&num);
    while(num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }
    printf("sum of individual digits of a positive integer is %d",sum); 
    return 0;
}