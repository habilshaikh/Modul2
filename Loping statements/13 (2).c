#include <stdio.h>
int main()
{
	//13.calculate the Factorial of a Given Number using while loop

	int i=1,num,fact=1;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	while(i <= num)
	{
		fact = fact*i;
		i++;   
	}
	
	printf("Factorial of %d is = %d",num,fact);
	return 0;
}
