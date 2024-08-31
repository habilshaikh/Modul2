#include <stdio.h>
//7. Accept marks from user and check pass or fail
int main()
{
	int marks ;
	  
	printf("Enter your marks between 1 to 100 :");
	scanf("%d",&marks);  
	
	if(marks>=0 && marks<=35)
	{
		printf("Fail");
	}
	else 
	{
		printf("Pass");
	}
	
	return 0;
	  
}
