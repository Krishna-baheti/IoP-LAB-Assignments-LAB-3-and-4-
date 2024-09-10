/*
    Topic : Program to print 1,4,9,16,25.....N
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Using the concept of loop to print all the square of natural
    numbers from 1 to N (entered by user)
*/

#include<stdio.h>

int main()
{
    printf("Enter any number \n");
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        printf("%d \n",i*i);
    }
    return 0;
}