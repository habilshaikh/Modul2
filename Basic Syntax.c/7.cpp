#include<stdio.h>
int main()
{
	float A,w,l;
	printf("7. Find area of Rectangle Formula : A=wl(w = width ,l= length)");
	
	printf("\nEnter the Value of W =");
	scanf("%f",&w);
	
	printf("\nEnter the value of l =");
	scanf("%f",&l);
	
	A = w*l;
	printf("Area of rectangle is %f",A);
	
	return 0;
}
