#include <stdio.h>
int main()
{
	//14.Accept 5 numbers from user and find those numbers factorials
	
	int num,i,fact=1;
	
	for(i=1 ; i<=5 ; i++)
	{
		printf("\nEnter the number :");
		scanf("%d",&num);
		
			fact = fact*num;
		
		printf("\nFactorial = %d\n", fact);
		
	}
	return 0; 
}
