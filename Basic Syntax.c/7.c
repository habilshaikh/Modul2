#include <stdio.h>
int main()
//7. Find area of Rectangle Formula : A=wl
// (w = width ,l= length)
{
	float A,w,l;
	
	printf("Enter the value of w");
	scanf("%f",&w);
	
	printf("Enter the value of l");
	scanf("%f",&l);
	
	A=w*l;
	
	printf("Area of Rectangle is=%f",A);
	
	return 0;
}
