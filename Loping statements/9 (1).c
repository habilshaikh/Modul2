#include <stdio.h>
int main()
{
	//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
	int sum =0, rem,num , i;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	while(num != 0)
	{
		rem = num%10;
		sum = sum + rem ;
		num = num/10;
	}
	
	printf("The sum of number is = %d", sum);
	return 0;
}
