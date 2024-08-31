#include <stdio.h>
int main()
{
	/*12.WAP to find maximum number among 3 numbers using ternary operator*/
	
	int max, a, b, c;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	printf("Enter the value of c:");
	scanf("%d",&c);
	
	max = (a>b && a>c)?printf("a is the biggest number"):(b>c && b>a)?printf("b is the biggest number"):printf("c is the biggest number");
	
	
}
