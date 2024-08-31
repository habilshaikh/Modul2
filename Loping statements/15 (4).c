#include <stdio.h>
int main()
{
	//15.Calculate sum of 10 numbers using of while loop

	int number ,i=1,sum=0;
	
	while(i<=10)
	{
		printf("Enter %d number:",i);
		scanf("%d",&number);
		
		sum = sum+number;
		i++;
	}
	
	printf("Sum of 10 number = %d", sum);
}
