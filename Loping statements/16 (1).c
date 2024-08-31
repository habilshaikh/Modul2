#include <stdio.h>
int main()
{
	//16.Calculate the Sum of Natural Numbers Using the While Loop

	int i=1 ,num ,sum=0;
	printf("Enter the number :");
	scanf("%d",&num); 
	 
	while(i<= num)
	{
		sum = sum + i;
		i++;
	}
	
	printf("The total value of Natural number is = %d", sum);
	 
	return 0;
}
