/*
    Topic : Program to print 1,4,9,16,25.....N
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter any number \n");
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d, ",i*i);
    }
    return 0;
}