#include <stdio.h>
#include<math.h>
//19.Calculate compound interest
//Formula  A = P(1 + r/n)^nt
int main()
{
	float P, r, n, t, A, Ans,power;
	printf("\nEnter the value of P");
	scanf("%f",&P);
	
	printf("\nEnter the value of r");
	scanf("%f",&r);
	
	printf("\nEnter the value of n");
	scanf("%f",&n);
	
	printf("\nEnter the value of t");
	scanf("%f",&t);
	
	A = P*(1+(r/n));
	
	power = (n*t);
	Ans = pow(A,power);
	
	printf("\nThe Amount of Compound interest is : %.3f",Ans);
	
	return 0;
	
	
}
