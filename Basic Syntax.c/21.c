#include <stdio.h>
int main()
//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable
{
	// USING 3RD VARIABLE :-
	int a,b,c,e,f;
	printf("Enter the number:");
	scanf("%d",&a);
	 
	printf("Enter the number:");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\nThe value of a is = %d",a);
	printf("\nThe value of b is = %d",b);
	
	//WITHOUT USING 3RD VARIABLE :- 
	
	printf("\nEnter the number:");
	scanf("%d",&e);
	 
	printf("Enter the number:");
	scanf("%d",&f);
	
	e= e + f ; // e+f = 3+2= 5
	f= e - f ; // e-f = 5-2= 3
	e= e - f ; // e-f = 5-3= 2
	
	printf("\nThe value of e is = %d",e);
	
	
	printf("\nThe value of f is = %d",f);

	return 0;
	 
}
