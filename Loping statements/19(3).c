#include <stdio.h>
int main()
{
	/*19.3. Patterns:
	
				*
			*	*	*	
		*	*	*	*	*	
	*	*	*	*	*	*	*	
*	*	*	*	*	*	*	*	*

	*/
	
	int i,j,k,space,row;
	
	printf("Enter the number:");
	scanf("%d",&row);
	
	space = row-1;
	
	for(i=1 ; i<=row ; i++)
	{
		for(j=space ; j>=1 ; j--)
		{
			printf(" ");
		}
		
		for(k=1 ; k<=i ; k++)
		{
			printf(" *");
		}
		
		printf("\n");
		
		space--;
	}
	return 0;
}
