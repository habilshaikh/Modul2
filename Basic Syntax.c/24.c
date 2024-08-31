#include <stdio.h>
int main()
//24.Accept 5 employees name and salary and count average and total salary
{
	 int emp1 ,emp2, emp3, emp4, emp5, totalsalary;
	 float average;
	 
	 printf("Enter Salary of Employee=");
	 scanf("%d",&emp1);	
	 
	 printf("Enter Salary of Employee=");
	 scanf("%d",&emp2);
	 
	 printf("Enter Salary of Employee=");
	 scanf("%d",&emp3);
	 
	 printf("Enter Salary of Employee=");
	 scanf("%d",&emp4);
	 
	 printf("Enter Salary of Employee=");
	 scanf("%d",&emp5); 
	 
	 totalsalary = emp1 +emp2 +emp3 +emp4 +emp5;
	  
	 average = (float)totalsalary/5; //Type Casting(Explicit).
	 
	 printf("\n Value of total salary is = %d", totalsalary);
	 printf("\n Average value is %f",average);
	 
	 return 0;
	 
}
