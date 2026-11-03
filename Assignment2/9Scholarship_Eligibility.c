/*This Code Does This.
A student is eligible for a scholarship if:
• Marks are at least 75
• Attendance is at least 75%
However:
• If marks are 90 or above and attendance is at least 70%, print Special
Scholarship.
• Otherwise,both normal conditions are satisfied, print Eligible. return ‘E’
• Else print Not Eligible.*/
#include<stdio.h>
int main()
{
    int Marks,Attendance;
    scanf("%d%d",&Marks,&Attendance);
    if(Attendance>=70&&Marks>=90)
    printf("Special Scholarship");
    else if(Attendance>=75&&Marks>=75)
    printf("Eligible");
    else
    printf("Not Eligible");
    return 0;
}