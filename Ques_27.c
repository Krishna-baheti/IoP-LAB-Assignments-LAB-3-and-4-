/*
    Topic : Program to check whether a nmuber is prime or not
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Using the concept of loop and "% operator" to check whether
    a number by user is prime or not
*/

#include<stdio.h>
int main()
{
    printf("Enter any number \n");
    int n;
    scanf("%d",&n);
    for(int i = 2; i <= n-1; i++)
    {
        if(n % i == 0)
        {
            printf("Not prime \n");
            return 0;
        }   
    }
    printf("Prime \n");
}
    
    
