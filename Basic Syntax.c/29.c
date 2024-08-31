#include <stdio.h>
//29.Convert minutes into seconds and hours
int main()
{
	float minutes , seconds , hours;
	
	printf("\nEnter the number of minutes:");
	scanf("%f",&minutes);
	
	seconds = 60 * minutes;
	
	hours = minutes/60;
	
	printf("\n%.2f Minutes = %.2f Seconds and %.2f hours",minutes, seconds, hours);
	
	return 0;
}
