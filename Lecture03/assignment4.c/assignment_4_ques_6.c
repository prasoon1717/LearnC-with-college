// Question 6: Find the Middle Value Among Three Numbers

#include <stdio.h>

void main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a >= b && a <= c) || (a <= b && a >= c))
        printf("Middle value = %d\n", a);
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        printf("Middle value = %d\n", b);
    else
        printf("Middle value = %d\n", c);
}