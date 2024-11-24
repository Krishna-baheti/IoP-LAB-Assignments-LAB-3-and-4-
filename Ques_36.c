/*
    Topic : Program to print 1,3,5,7,9.....N
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter any number n \n");
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d, ",i);
        }
    }
    return 0;
}