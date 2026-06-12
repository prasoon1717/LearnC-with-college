// Question 5: Check Whether Three Sides Form a Valid Triangle

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
        printf("Valid Triangle\n");
    else
        printf("Not a Valid Triangle\n");
}