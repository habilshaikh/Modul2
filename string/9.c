#include<stdio.h>
int main(){
	char str[100];
	int len = 0;
	
	printf("Enter a string :-");
	gets(str);
	
	while(str[len]!='\0'){
		len++;
		
	}
	
	if(str[len-1] == '\n'){
		len--;
	}
	printf("The maximum number of characters in the string is :- %d\n" ,len);
	return 0;
}
