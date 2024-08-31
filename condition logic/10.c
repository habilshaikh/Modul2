#include <stdio.h>
//10.WAP to check whether a number is negative, positive or zero.
int main()
{
	int num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	if(num<0)
	{
		printf("Negative");
	}
	else if(num>0)
	{
		printf("Positive");
	}
	else
	{
		printf("Zero");
	}
	
	return 0;
}
