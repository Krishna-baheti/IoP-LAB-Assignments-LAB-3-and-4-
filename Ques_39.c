/*
    Topic : Program to print 1/1! + 2/2! + 3/3! + ... n/n!
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int fact(int n) {
    int prod = 1;
    for(int i = 1; i <= n; i++) {
        prod = prod * i;
    }
    return prod;
}

int main() {
    printf("Enter the number of terms : ");
    int n;
    float sum = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        sum = sum + (float)i/fact(i);
    }
    printf("Sum of series till n terms is : %f\n",sum);
    return 0;
}