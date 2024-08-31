#include <stdio.h>
//11.WAP to find number is even or odd using ternary operator
int main()
{
	int num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	(num%2 ==0)?(printf("Even number")):(printf("Odd number"));
	
	return 0;
}
