/*
    Topic : Program to print table of any number 
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/
#include<stdio.h>

int main()
{
    printf("Enter any number \n");
    int num;
    scanf("%d",&num);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n",num,i,num*i);
    }
    return 0;
}
