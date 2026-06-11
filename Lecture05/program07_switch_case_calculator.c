//switch case ; Calculator
#include <stdio.h>
void main()
{
	char ch;
	float a,b;
	printf("-----------------\n");
	printf("Press + symbol to perform addition\n");
	printf("Press - symbol to perform perform substraction\n");
	printf("Press * symbol to perform perform multiplication\n");
	printf("Press / symbol to perform perform division\n");
	printf("-----------------\n");

	printf ("Enter your choice");
	scanf(" %c",&ch);
	switch(ch)
	{
	case  '+' :
		printf("Enter the value of a and b");
		scanf("%f%F , &a,&b");
		printf("Sum = %f\n", a+b);
		break;
		
	case  '-' :
		printf("Enter the value of a and b");
		scanf("%f%F , &a,&b");
		printf("Sub = %f\n", a-b);
		break;
		
	case  '*' : 
		printf("Enter the value of a and b");
		scanf("%f%F , &a,&b");
		printf("Mul = %f\n", a*b);
		break;

	case  '/' :
		printf("Enter the value of a and b");
		scanf("%f%F , &a,&b");
		printf("Div = %f\n", a/b);
		break;

	default :
	printf("Invalid Choice\n");
	}
}


	
