 #include <stdio.h>
void main ()
{
	double kilometers , millimeters;
	
	printf("Enter distance in kilometer");
	scanf("%lf",&kilometers);
	
	millimeters = kilometers*10000000;
	
	printf ("%.2f km is equal to %.2f mm/n", kilometers,millimeters);
	
}
