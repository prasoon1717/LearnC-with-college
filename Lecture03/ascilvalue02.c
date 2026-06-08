//1 lower case to upper conversion

#include <stdio.h>
void main()
{
	char ch;
	
	printf("Enter the any char");
	scanf("%c",&ch);
	ch=ch -32;
	
	printf("Upper case = %c\n",ch);
	
}
