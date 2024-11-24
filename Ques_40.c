/*
    Topic : Read numbers till a negative number is entered and find the
    sum of numbers read
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    do
    {
        printf("Enter a number \n");
        scanf("%d",&n);
        if(n >= 0)
        {
           sum = sum + n;
        }
    } while(n >= 0);
    printf("Sum is %d \n",sum);
    return 0;
}