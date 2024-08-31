#include<stdio.h>
int main()
{
	float A,w,h,l;
	
	printf("10.find the area of a rectangular prism formula : A=2(wl+hl+hw)(w = width, h = height, l = length)");

	
	printf ("\nEnter the value is width= ");
	scanf("%f",&w);
	
	printf ("\nEnter the value is height= ");
	scanf("%f",&h);
	
	printf ("Enter the value is lenght= ");
	scanf("%f",&l);
	
	
	A = 2*(w*l)+2*(h*l)+2*(h*w);
	
   printf("The area of a Rectangular prism is = %f", A);

  return 0;		

}
