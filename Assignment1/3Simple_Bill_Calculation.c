/* A C program to calculate the total cost of an item.
The program should:
• Accept the price of one item.
• Accept the quantity purchased.
• Calculate and display the total bill.
Formula:
Total Bill = Price × Quantity*/
#include<stdio.h>
int main()
{
    float price,Total_Bill;
    int Qty;
    printf("Enter Price:");
    scanf("%f",&price);
    printf("Enter Qty:");
    scanf("%d",&Qty);
    printf("Total Bill = %f",price*Qty);
    return 0;
}