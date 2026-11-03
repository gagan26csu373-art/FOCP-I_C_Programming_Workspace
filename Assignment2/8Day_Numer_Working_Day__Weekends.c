/*A code which does this
Take a number from 1 to 7 and use switch:
1 → Monday
2 → Tuesday
...
7 → Sunday
Along with the day name, print:
• Working Day for Monday–Friday
• Weekend for Saturday–Sunday
For any other number, print Invalid Day.
*/
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    switch (n)
    {
        case 1:
            printf("Monday: Working Day");
            break;
        case 2:
            printf("Tuesday: Working Day");
            break;
        case 3:
            printf("Wednesday: Working Day");
            break;
        case 4:
            printf("Thursday: Working Day");
            break;
        case 5:
            printf("Friday: Working Day");
            break;
        case 6:
            printf("Saturday: Weekend");
            break;
        case 7:
            printf("Sunday: Weekend");
            break;
        default:
            printf("Invalid Day");
            break;
    }

    return 0;
}