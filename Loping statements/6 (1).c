#include <stdio.h>
int main()
{
	//6. WAP to print Fibonacci series up to given numbers
	
	int num1=0,num2=1,num3,size,i;
	
	printf("Enter the number:");
	scanf("%d",&size);
	
	printf("Fibinacci series = %d \t %d \t",num1,num2);
	
	for(i=2 ; i<size ; i++)
	{
		num3 = num1+num2;
		
		printf("%d\t",num3);
		
		num1 = num2 ;
		num2 = num3;
	}
	
	return 0;
}
