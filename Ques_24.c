/*
    Topic : WRITE A C PROGRAM TO FIND THE VALUE OF Y USING 
    
    Y(x,n) = 1+x where n=1
           = 1+x/n where n=2
           = 1 + x^n where n=3
           = 1 + nx when n>3 or n<1
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter value of x and n \n");
    float x,Y;
    int n;
    scanf("%f",&x);
    scanf("%d",&n);
    if(n==1)
    {
        Y = 1 + x;
        printf("%f \n",Y);
    }
    else if(n==2)
    {
        Y = 1 + x/n;
        printf("%f \n",Y);
    }
    else if(n==3)
    {
        Y = 1 + pow(x,n);
        printf("%f \n",Y);
    }
    else
    {
        Y = 1 + n*x;
    }
    return 0;
}