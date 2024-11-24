/*
    Topic : Read a number N and print a single digit answer showing
            sum of digits of N
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
    printf("sum of digits of N is %d",sum); 
    return 0;
}