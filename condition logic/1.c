#include <stdio.h>
//1. Write a C program to accept two integers and check whether they are equal
//or not
int main()
{
	int num1, num2;
	
	printf("Enter the first value:");
	scanf("%d",&num1);
	
	printf("Enter the Second value:");
	scanf("%d",&num2);
	
	if(num1 == num2)
	{
		printf("\nThe numbers are equal");
	}
	else
	{
		printf("\nThe numbers are not equal");
	}
	
}
