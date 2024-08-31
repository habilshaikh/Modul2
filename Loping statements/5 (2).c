#include <stdio.h>
int main()
{
	//5. WAP to print factorial of given number

	int fact=1,i,num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(i=1 ; i<=num ; i++)
	{
		fact = fact*i;
	}
	
	printf("Factorial of %d = %d",num,fact);
	return 0;
}
