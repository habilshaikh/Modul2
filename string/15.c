#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[1000];
    int i = 0, j = 0;
    int min_length = 1000, max_length = 0;
    char smallest[1000], largest[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if(str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    while (str[i] != '\0') {
 
         if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; 
            j = 0;

            int length = strlen(word);

            if (length < min_length && length > 0) {
                min_length = length;
                strcpy(smallest, word);
            }
            if (length > max_length) {
                max_length = length;
                strcpy(largest, word);
            }
        }

        if (str[i + 1] == '\0' && j > 0) {
            word[j] = '\0';
            int length = strlen(word);

            if (length < min_length && length > 0) {
                min_length = length;
                strcpy(smallest, word);
            }
            if (length > max_length) {
                max_length = length;
                strcpy(largest, word);
            }
        }

        i++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}
