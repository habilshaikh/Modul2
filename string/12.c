#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char word[] = "is";
    int i, j, found, count = 0;
    int str_len, word_len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str_len = strlen(str);
    if(str[str_len - 1] == '\n') {
        str[str_len - 1] = '\0';
    }

    str_len = strlen(str);
    word_len = strlen(word);

    for(i = 0; i <= str_len - word_len; i++) {
        found = 1;
        for(j = 0; j < word_len; j++) {
            if(str[i + j] != word[j]) {
                found = 0;
                break;
            }
        }
        
    
        if(found) {
            
            if (i > 0 && ((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))) {
                found = 0;
            }
    
            if (i + word_len < str_len && ((str[i + word_len] >= 'a' && str[i + word_len] <= 'z') || (str[i + word_len] >= 'A' && str[i + word_len] <= 'Z'))) {
                found = 0;
            }
        }

        if(found) {
            count++;
        }
    }


    printf("The word 'is' appears %d times in the string.\n", count);

    return 0;
}
