#include <stdio.h>
//25.Accept 5 expense from user and find average of expense
int main()
{
	float expense1 ,expense2 ,expense3 ,expense4 ,expense5, sumofexp, average; 
	
	printf("Enter the value of Expanse1=");
	scanf("%f",&expense1);
	
	printf("Enter the value of Expanse2=");
	scanf("%f",&expense2);
	
	printf("Enter the value of Expanse3=");
	scanf("%f",&expense3);
	
	printf("Enter the value of Expanse4=");
	scanf("%f",&expense4);
	
	printf("Enter the value of Expanse5=");
	scanf("%f",&expense5);
	
	sumofexp = expense1 +expense2 +expense3 +expense4 +expense5 ;
	
	average = sumofexp/5;	
	
	printf("Averag of expense is: %f",average);
	
	return 0;
}
