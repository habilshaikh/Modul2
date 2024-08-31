#include <stdio.h>
//30.WAP to convert years into days and days into years
int main()
{
	int years , days , copy;
	
	printf("Enter the number of years :"); 
	scanf("%d",&years);
	
	printf("Enter the number of days:");
	scanf("%d",&days);
	
	copy= years;
	
	years = days / 365;
	
	printf("\n%d days = %d  years",days,years);
	
	days = copy * 365;
	
	printf("\n%d years = %d  days",copy,days);
	
	return 0;
}
