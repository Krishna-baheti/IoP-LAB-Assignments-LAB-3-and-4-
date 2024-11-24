
/*
    Topic : WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES 
            REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN BELOW.
     If sales<=Rs. 500, commission is 5%
     If sales> but <=2000, commission is Rs. 35 plus 10% above Rs. 500
     If sales>2000 but <=5000, commission is Rs. 185 plus 12% above Rs. 2000
     If sales>5000, commission is 12.5%
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter the sales amount : \n");
    float sales,comm;
    scanf("%f",&sales);
    if(sales <= 500)
    {
        printf("Commission is %f \n",sales*5/100);
    }
    else if(sales > 500 && sales <= 2000)
    {
        printf("Commission is %f \n",(sales*10/100) + 35);
    }
    else if(sales > 2000 && sales <= 5000)
    {
        printf("Commission is %f \n",(sales*12/100) + 185);
    }
    else if(sales > 5000)
    {
        printf("Commission is %f \n",(sales*12.5/100));
    }
    return 0;
}