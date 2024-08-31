#include <stdio.h>
//31.Convert kilometers into meters
int main()
{
	int meters, km;
	
	printf("Enter the value of Kilometers:");
	scanf("%d", &km);
	
	meters = 1000 * km ;
	
	printf("%d kilometers = %d meters", km, meters);
}
