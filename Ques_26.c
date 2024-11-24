/*
    Topic : Program to print sum of all odd and even number between 1 to n.   
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter any number n \n");
    int n, sum_even = 0, sum_odd = 0;
    scanf("%d",&n);
    for(int i = 1; i < n; i++)
    {
        if(i % 2 == 0)
        {
            sum_even = sum_even + i;
        }
        else
        {
            sum_odd = sum_odd + i;
        }
    }
    printf("Sum of even numbers between 1 and %d is %d \n",n,sum_even);
    printf("Sum of odd numbers between 1 and %d is %d \n",n,sum_odd);
return 0;
}