/*A program to calculate the electricity bill based on units consumed:
 Units      Rate
0–100       ₹2/unit
101–200     ₹3/unit
Above 200   ₹5/unit */
#include<stdio.h>
int main()
{
    int Units;
    printf("Input:");
    scanf("%d",&Units);
    if(Units>200)
    printf("Output:%d",Units*5-500);
    else if(Units>100)
    printf("Output:%d",Units*3-100);
    else
    printf("Output:%d",Units*2);
    return 0;
}