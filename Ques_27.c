/*
    Topic : Program to check whether a number is prime or not
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter any number \n");
    int n, flag = 0;
    scanf("%d",&n);
    for(int i = 2; i <= n-1; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }   
    }
    if(flag == 0) printf("Prime number\n");
    else printf("Not Prime\n");
    return 0;
}
    
    
