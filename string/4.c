#include<stdio.h>

int main()
{
	char str[100];
	int i = 0, word_cou = 0, in_word = 0;
	
	printf ("Enter a string :-");
	gets(str);
	
	while(str[i] != '\0'){
		if(str[i] == ' ' || str[i] == '\t'||str[i] == '\n'){
			in_word=0;
		}
		
			
			else{
				if (in_word == 0){
					in_word = 1;
					word_cou++;
				}
			}
	 i++;
    }

    printf("Total number of words: %d\n", word_cou);

    return 0;
}
