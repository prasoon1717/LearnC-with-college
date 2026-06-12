// Question 9: Check Student Pass, Fail or Supply

#include <stdio.h>

void main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 60)
        printf("Pass\n");
    else if (marks >= 40)
        printf("Supply\n");
    else
        printf("Fail\n");
}