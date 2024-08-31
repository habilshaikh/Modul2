#include <stdio.h>
//3. WAP to check if the given year is a leap year or not
int main()
{
	int years;

	printf("Enter the year:");
	scanf("%d",&years);
	
	if( years % 4 == 0)
	{
		printf("Leap Year");
	} 
	else
	{
		printf("Not leap year");
	}
	
	return 0;                                                               
}
