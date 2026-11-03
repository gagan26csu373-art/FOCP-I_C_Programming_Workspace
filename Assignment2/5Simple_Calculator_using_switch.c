/*A program that Take two numbers and an operator (+, -, *, /, %) 
and perform the corresponding operation using switch. 
For division: 
• If the second number is 0, print Cannot divide by zero.  
Example: 
Input: 15 4 % 
Output: 3 
*/
#include<stdio.h>
int main()
{
    int n1,n2 ;char operation;
    printf("Enter Two Numbers :");
    scanf("%d%d",&n1,&n2);
    printf("Choose operations + - / * %%");
    scanf(" %c",&operation);
    switch(operation)
    {
        case '+':
        printf("\n Sum=%d",n1+n2);
        break;
        case '-' :
        printf("\n Subtract=%d",n1-n2);
        break;
        case '/' :{if (n2 == 0)
                    printf("Cannot Divide by Zero");
                   else
                    printf("\n Divide=%d",n1/n2);}
        break;
        case '*' :
        printf("\n Multiply=%d",n1*n2);
        break;
        case '%' :
        printf("\n Remainder=%d",n1%n2);
        break;
        default :
        printf("Input id invalid");
    }
return 0;
}