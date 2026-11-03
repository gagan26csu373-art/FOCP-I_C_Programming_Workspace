/*A C program to store and display the following information using appropriate
primitive data types:
• Student ID
• Age
• Percentage
• Grade
Display all the information clearly using printf().*/
#include <stdio.h>
int main()
{
    int studentID, age;
    float percentage;
    char grade;
    printf("Enter Student ID: ");
    scanf("%d", &studentID);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Percentage: ");
    scanf("%f", &percentage);
    printf("Enter Grade: ");
    scanf(" %c", &grade);
    printf("\nStudent ID: %d\nAge: %d\nPercentage: %.2f\nGrade: %c\n", studentID, age, percentage, grade);
    return 0;
}