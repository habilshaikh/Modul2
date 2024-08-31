#include <stdio.h>
int main()
//20.Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.
{
	int salary,	 insurancepremium, loaninstallment ,remainingsalary;
	
	printf("Enter Your monthly salary:");
	scanf("%d",&salary);
	
	insurancepremium = salary*0.1;
	loaninstallment = salary*0.1;
	
	remainingsalary = salary - insurancepremium - loaninstallment;
	
	printf("/nThe  Remaining salary is = %d ", remainingsalary);
	
	return 0;
	
}
