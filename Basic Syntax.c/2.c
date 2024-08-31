 #include <stdio.h>
 int main(){
 /*
	Write a program to make Simple calculator (to make addition, subtraction,
	multiplication, division and modulo).
*/	

	int num1,num2;
	
	printf("Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo");
	
	printf("Enter your first number:");
	scanf("%d",&num1);
	
	printf("Enter your second number:");
	scanf("%d",&num2);
	
	printf("num1 + num2 =%d \n",num1+num2);
	printf("num1 - num2 =%d \n",num1-num2);
	printf("num1 * num2 =%d \n",num1*num2);
	printf("num1 / num2 =%d \n",num1/num2);
	printf("num1 %%  num2 =%d \n",num1 % num2);
	
	return 0;
 }
