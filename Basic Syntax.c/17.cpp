
2#include <stdio.h>
int main()
//17.Calculate person’s insurance premium based on salary
{
	float insurancepercentage;
	int salary,insurancepremium;
	
	printf("\nEnter Your Salary:");
	scanf("%d",&salary);
	
	printf("\nEnter  insurancepercentage:");
	scanf("%f",&insurancepercentage);
	
	insurancepremium = salary*insurancepercentage/100;
	
	printf("\nThe amount of insurance premium is = %d",insurancepremium);
	
	return 0;
}
