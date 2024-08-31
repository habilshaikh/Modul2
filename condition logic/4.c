#include <stdio.h>
/*4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement
*/
int main()
{
	int  num1 , num2 , result;
	char Operator;
	
	printf("Select an operation to perform (+, -, *, /, %%): ");
	scanf("%c",&Operator);
	
	printf("Enter the first number:");
	scanf("%d",&num1);
	
	printf("Enter the second number:");
	scanf("%d",&num2);
	
	if(Operator == '+'){
		result = num1 + num2 ;
	}else if (Operator == '-'){
		result = num1 - num2 ;
	}else if (Operator == '*'){
		result = num1 * num2 ;
	}else if (Operator == '/'){
		result = num1 / num2 ;
	}else if (Operator == '%'){
		result = num1 % num2 ;
	}else{
	}
	
	printf("Num1 %c Num2 = %d %c %d = %d",Operator, num1, Operator, num2, result);
	
	return 0;
}
