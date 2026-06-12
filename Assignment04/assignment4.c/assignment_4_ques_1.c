// Question 1: Check if a Number is Divisible by Both 4 and 6

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 4 == 0 && n % 6 == 0)
        printf("%d is divisible by both 4 and 6\n", n);
    else
        printf("%d is not divisible by both 4 and 6\n", n);
}