// Question 2: Check if a Number is Divisible by 2 but Not by 5

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 5 != 0)
        printf("%d is divisible by 2 but not by 5\n", n);
    else
        printf("%d does not satisfy the condition\n", n);
}