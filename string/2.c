#include<stdio.h>

int main(){
	
	char str[100];
	int i=0;
	
	printf("Enter a string = ");
	scanf("%s",str);
	
	
	while (str[i]!='\0'){
		printf("character at position %d: %c\n",i ,str[i]);
		i++;
	}
	return 0;
}
