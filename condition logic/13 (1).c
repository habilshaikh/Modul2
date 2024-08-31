#include <stdio.h>
int main()
{
	/*13.WAP to find minimum number among 3 numbers using ternary operator*/
	
	int max, a, b, c;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	printf("Enter the value of c:");
	scanf("%d",&c);
	
	max = (a<b && a<c)?printf("The smallest number is a"):(b<c && b<a)?printf(" The smallest number is b"):printf("The smallest number is c");
	
	
}
