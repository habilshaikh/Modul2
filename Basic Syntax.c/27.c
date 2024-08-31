
#include <stdio.h>
//27.Convert days into months
int main()
{
	int days; 
	float months;
	printf("Enter the value of days:");
	scanf("%d",&days);
	
	
	months = (float)days/30;
	
	printf("%d days = %.1f months",days,months);
	
	return 0;
	
}
