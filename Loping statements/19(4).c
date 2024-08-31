#include <stdio.h>
int main()
{
	/*
	19.4. Patterns:-
	
	*
	* *
	* * *
	* * * *
	* * * * *
	* * * * * * 
	* * * * * 
	* * * *
	* * *
	* *
	*
	
	*/
	
	int i,j,row ;
	
	printf("Enter the number :");
	scanf("%d",&row);
	
	
	
	for(i=row-1 ; i>=1 ; i--)
	{
		for(j=1 ; j<=i ; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
	return 0;
}
