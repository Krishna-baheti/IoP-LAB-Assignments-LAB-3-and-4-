/*
    Topic : Program to findout max and min from N numbers
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main() {
    printf("Enter the value of n : ");
    int n;
    scanf("%d",&n);
    printf("Enter the numbers : \n");
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    int max = arr[0], min = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Max of n numbers : %d\n",max);
    printf("Min of n numbers : %d\n",min);

    return 0;
}

