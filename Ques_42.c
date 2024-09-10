/*
    Topic : Read a numner n and print if n is prime or composite
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user any arbitrary number and then
                  using the concept of loops and % to check for all numbers
                  from 1 to n.
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
    printf("Composite \n");
    return 0;
}
    