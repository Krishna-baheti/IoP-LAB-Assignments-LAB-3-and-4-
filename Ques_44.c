/*
Topic : WRITE A PROGRAM IN C FOR THE FOLLOWING.
    AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS : 
 
Consumption in unit                      Rate for Charge
0-200                                   Rs 0.50 per unit
201-400                             Rs. 100 plus Re 0.65 per unit excess of 200
401-600                             Rs. 230 plus Re 0.80 per unit excess of 400
Above 600                          Rs. 425 plus Rs. 1.25 per unit excess of 600
Print the amount to be paid by the consumer.

Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>
int main()
{
    printf("Enter the electricity consumption in units \n");
    float units,price;
    scanf("%f",&units);
    if(units >= 0 && units <= 200)
    {
        printf("Amount to be paid by user is %f \n",0.5*units);
    }
    else if(units >= 201 && units <= 400)
    {
        printf("Amount to be paid by user is %f \n",(0.65*units) + 100);
    }
    else if(units >= 401 && units <= 600)
    {
        printf("Amount to be paid by user is %f \n",(0.80*units) + 230);
    }
    else if(units > 600)
    {
        printf("Amount to be paid by user is %f \n",(1.25*units) + 425);
    }
    return 0;
}
