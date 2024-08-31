#include <stdio.h>
int main()
{
	/*
	19.6.  Patterns:
	A
	A B
	A B C
	A B C D
	A B C D E
	*/
	
	int i,j,row;
	char ch;
	
	printf("Enter the number:");
	scanf("%d",&row);
	
	for(i=1 ; i<=row ; i++)
	{	
		ch = 'A';
		for(j=1 ; j<=i ; j++)
		{
			printf("%c",ch);
			ch++;
			
		}
		printf("\n");
		
	}
	return 0;
}
