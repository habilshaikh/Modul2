// 10.WAP to perform Palindrome number using for loop and function

#include<stdio.h>
void reverse(int num);
int main()
{
	int num;
	reverse(num);
	return 0;
}
void reverse(int num){
	int i,rem,rev=0;
	printf("Enter the number:");
	scanf("%d",&num);
	
	for(i=num;i!=0;i=i/10)
	{
		rem = i%10;
		rev = (rev *10) + rem;
		
	}
	printf("The reversed number is =%d",rev);
}
