// Question 10: Calculate Area of Different Shapes Using Switch Case

#include <stdio.h>

void main()
{
    int choice;
    float area, r, l, b, h;

    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = 3.14 * r * r;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            area = l * b;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &b, &h);
            area = 0.5 * b * h;
            printf("Area of Triangle = %.2f\n", area);
            break;

        default:
            printf("Invalid choice\n");
    }
}