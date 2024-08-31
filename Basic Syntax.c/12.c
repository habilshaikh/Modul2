#include <stdio.h>
int main()
//12.Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?
{
	int students, apples = 5,total;
	
	printf("Enter the number of students=");
	scanf("%d",&students);
	
	printf("%d",students);
	
	total = students*apples;
	
	printf("The Required appels are %d ",total);
	
	return 0;
}

