/*This Code does this.
An ATM allows withdrawal only when:
• PIN is correct (1234)
• Amount is a multiple of 100
• Amount is less than or equal to balance
• Amount is greater than 0
Given pin, amount, and balance, print:
• Invalid PIN
• Invalid Amount
• Insufficient Balance
• Withdrawal Successful
Implement the program using nested if*/
#include <stdio.h>
int main()
{
    int pin, amount, balance;
    printf("Enter PIN: ");
    scanf("%d", &pin);
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("Enter balance: ");
    scanf("%d", &balance);
    if (pin == 1234)
    {
        if (amount > 0)
        {
            if (amount % 100 == 0)
            {
                if (amount <= balance)
                {
                    printf("Withdrawal Successful\n");
                }
                else
                {
                    printf("Insufficient Balance\n");
                }
            }
            else
            {
                printf("Invalid Amount\n");
            }
        }
        else
        {
            printf("Invalid Amount\n");
        }
    }
    else
    {
        printf("Invalid PIN\n");
    }

    return 0;
}