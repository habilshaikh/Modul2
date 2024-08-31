#include <stdio.h>
int main()
{
	//4. WAP to print table up to given numbers
	
	int num,i ,table;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	for(i=1 ; i<=10 ; i++)
	{
		table = num*i;
		
		printf("\n%d * %d = %d",num,i,table);
	}
	
	return 0;
}
