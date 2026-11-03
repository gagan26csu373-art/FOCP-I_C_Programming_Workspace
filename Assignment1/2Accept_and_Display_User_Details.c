/*A C program to accept the following details from the user using scanf():
• Age
• Height (in meters)
• Grade (single character)
Display all the entered values clearly using printf().
*/
#include<stdio.h>
int main()
{
    int age;
    float height;
    char grade;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    printf("Enter grade: ");
    scanf(" %c", &grade);
    printf("\nAge: %d\nHeight: %.2f meters\nGrade: %c\n", age, height, grade);
    return 0;
}