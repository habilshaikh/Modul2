#include <stdio.h>
//28.Convert years into days and months
int main()
{
	int year, days, months  ;
	
	printf("Enter the number of years=");
	scanf("%d",&year);
	
	months = year * 12 ;
	
	days = year * 365 ;
	
	printf("%d years = %d days and %d month",year,days,months);
	
	return 0;

}
