//Loop program : Sum of all digit of a number

#include <stdio.h>
void main()
{
int n, sum=0,rem;
printf("enter the value of n");
scanf ("%d",&n);
while(n>0)
{
	rem = n%10;
	sum=sum+rem;
	n=n/10;
}
	printf("sum of all digits of a no: %d",sum);
}
