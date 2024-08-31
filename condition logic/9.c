#include <stdio.h>
/*
9. C Program to Check Uppercase or Lowercase or Digit or Special
Character
*/
int main()
{
	char character;
	
	printf("Enter any character:");
	scanf(" %c",&character);
	
	if(character >= 'A' && character <= 'Z')
	{
		printf("Uppercase");
	}
	else if (character >= 'a' && character <= 'z')
	{
		printf("Lowercase");
	}
	else if ( character >= '0' && character <= '9')
	{
		printf("digit");
	}
	else
	{
		printf("Special Character");
	}
}
