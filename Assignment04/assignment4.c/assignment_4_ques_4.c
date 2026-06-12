// Question 4: Classify a Person as Child, Teenager, Adult, or Senior

#include <stdio.h>

void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 13)
        printf("Child\n");
    else if (age < 18)
        printf("Teenager\n");
    else if (age < 60)
        printf("Adult\n");
    else
        printf("Senior Citizen\n");
}