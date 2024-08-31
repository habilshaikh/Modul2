
#include <stdio.h>
/*
23.WAP to calculate swap 2 numbers with using of multiplication and division.
*/
int main()
{
	int a,b;
	
	printf("\nEnter the value of a=");
	scanf("%d",&a);
	
	printf("\nEnter the value of b=");
	scanf("%d",&b);
	
	a = a*b ;
	b = a/b ;
	a = a/b ;
	
	printf("\n Value of a = %d",a);
	printf("\n Value of b = %d",b);
	
	return 0;
}
