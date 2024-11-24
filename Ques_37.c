/*
    Topic : Program to print 2,4,6,8,10,12………N. 
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
        if(i % 2 == 0)
        {
            printf("%d ,",i);
        }
    }
    return 0;
}