#include <stdio.h>
int main()
/*
22.Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/
{
	int P,R,t,Amount,CompInterest;
	  
	printf("Enter the value of P=");
	scanf("%d",&P);
	
	printf("Enter the value of R=");
	scanf("%d",&R);
	
	printf("Enter the value of t=");
	scanf("%d",&t);
	
	Amount= P*(1 + R/100)*t;
	
	printf("\nThe value of Amount is =%d",Amount);
	
	CompInterest = Amount- P ;
	
	printf("\nThe Value of Compound interest is = %d", CompInterest);
	
	return 0;
}
