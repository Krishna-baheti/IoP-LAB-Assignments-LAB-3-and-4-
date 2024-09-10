/*
    Topic : Read a number N and print factors of N
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Using the concept of loop and % operator we find all the
    factors of a particular number and then print them 
*/

#include<stdio.h>

int main()
{
    printf("Enter any number \n");
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}