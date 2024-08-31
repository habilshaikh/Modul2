#include <stdio.h>
int main()
{
	//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
	
	int i,num,last,first=0,sum=0;
	printf("Enter the number :");
	scanf("%d",&num);
	
	last = num%10;
	
	while(num >= 10){
		num = num/10;
	}
	
	first = num;
	
	sum = last + first ;
	
	printf("The sum of first and last digit is = %d", sum);
	return 0;
}
