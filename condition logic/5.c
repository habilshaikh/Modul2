#include <stdio.h>
/*5. Check Number Is Positive or Negative*/
int main()
{
	int number;
	
	printf("Enter the number:");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("\n Positive number");
	}
	else
	{
		printf("\n Negative number");
	}
	
	return 0;
}
