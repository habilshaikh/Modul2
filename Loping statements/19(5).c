#include <stdio.h>
int main()
{
	/*
	19.5. Patterns:
	
	1
	2 3
	4 5 6
	7 8 9 10
	*/
	
	int i,j,row, k=1;
	
	printf("Enter the number:");
	scanf("%d",&row);
	
	for(i=1 ; i<=row ; i++)
	{
		for(j=1; j<=i ; j++)
		{
			printf(" %d",k);
			k++; 
		}
		printf("\n");
	}
	return 0;
}
