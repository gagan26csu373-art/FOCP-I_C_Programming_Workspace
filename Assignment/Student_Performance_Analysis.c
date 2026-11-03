/*A faculty member has collected the marks of N students in a programming test.
 Develop a program that processes these marks and reports the class average,
 the highest marks obtained, and the lowest marks obtained. */
#include <stdio.h>

int main()
{
    int n;
    printf("Enter no of students: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Number of students must be positive.\n");
        return 1;
    }
    int arr[n];
    int i, highest, lowest, sum = 0;
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];

        if (i == 0)
        {
            highest = arr[i];
            lowest = arr[i];
        }
        else
        {
            if (arr[i] > highest)
                highest = arr[i];
            if (arr[i] < lowest)
                lowest = arr[i];
        }
    }
    float avg = (float)sum / n;
    printf("Class Average = %.2f\n", avg);
    printf("Highest marks obtained = %d\n", highest);
    printf("Lowest marks obtained = %d\n", lowest);
    return 0;
}