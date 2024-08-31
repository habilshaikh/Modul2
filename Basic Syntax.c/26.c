#include <stdio.h>
//26.Convert temperature Fahrenheit to Celsius
// Formulas:-- 1. Fahrenheit (°F) = (Temperature in degrees Celsius (°C) * 9/5) +32
//			   2. Celsius (°C) = (Temperature in degrees Fahrenheit (°F) - 32) * 5/9.
int main()
{
	float Fahrenheit, Celsius ;
	
	printf("\nEnter the value of Fahrenheit :");
	scanf("%f",&Fahrenheit);
	
	printf("\nEnter the value of Celsius :");
	scanf("%f",&Celsius);
	
	Fahrenheit = Celsius*9/5+32;
	
	printf("\nThe converted value of Temprature Fahrenheit to cesius is %f",Fahrenheit);
	
	return 0;
}
