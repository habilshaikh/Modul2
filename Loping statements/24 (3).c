#include <stdio.h>
int main()
{
	/*
	Series Program:
	24. 1 + 2 + 3 + 4 + 5 + ... + n
	*/
	
	int i,num,ans=0;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(i=1 ; i<= num ; i++)
	{
		
		ans = ans +i;
	}
	
 	printf("The answer of 1+2+3+4..... %d",ans);
	return 0;
}
