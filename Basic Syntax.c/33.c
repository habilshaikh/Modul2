#include <stdio.h>
#include <math.h>
//33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
int main()
{
	int N , n1, n2, n3;
	
	printf("Enter the value of N =");
	scanf("%d",&N);
	
	n1 = pow(N,1);
	n2 = pow(N,2);
	n3 = pow(N,3);
	
	printf("\nThe answer of One power is= %d",n1);
	printf("\nThe answer of Two power is= %d",n2);
	printf("\n The answer of Three power is=%d",n3);

	
}
