#include <stdio.h>
int main()
//18.Calculate person’s Annual salary
{
	int Monthlysalary , Annualsalary ;
	
	printf("Enter the Amount of monthlysalary:");
	scanf("%d",&Monthlysalary);
	
	Annualsalary = Monthlysalary*12;
	
	printf("\nThe Amount of Annualsalary is %d",Annualsalary);
	
	return 0;
}
