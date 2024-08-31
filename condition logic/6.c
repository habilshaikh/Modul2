#include <stdio.h>
//6. Find the Character Is Vowel or Not
int main()
{
	char character;
	
	printf("Enter any Character :");
	scanf("%c",&character);
	
	if(character == 'a'||character == 'e'||character == 'i'||character == 'o'||character == 'u'||
	character == 'A'||character == 'E'||character == 'O'||character == 'I'||character == 'U')
	{
		printf("Vowel");
	}
	else 
	{
		printf("Not Vowel");
	}
}
