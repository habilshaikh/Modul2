#include <stdio.h>
int main()
{
	//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

	int i,num,rem=0,rev ;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	for( ; num != 0 ;)
	{
		rem = num %10;
		rev = (rev*10)+rem;
		num = num/10;
	}
	
	printf("\n Reversed number = %d",rev);
	
	return 0;
}
