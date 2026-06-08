// Question 3: Determine Whether a Student Gets Scholarship

#include <stdio.h>

void main()
{
    int marks, attendance;
    printf("Enter marks (out of 100): ");
    scanf("%d", &marks);
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    if (marks >= 75 && attendance >= 75)
        printf("Student is eligible for scholarship\n");
    else
        printf("Student is not eligible for scholarship\n");
}