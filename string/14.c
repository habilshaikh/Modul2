#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    char combined[2000];  
    int i = 0, j = 0;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    if(str1[strlen(str1) - 1] == '\n') {
        str1[strlen(str1) - 1] = '\0';
    }
    
    if(str2[strlen(str2) - 1] == '\n') {
        str2[strlen(str2) - 1] = '\0';
    }

    while(str1[i] != '\0') {
        combined[i] = str1[i];
        i++;
    }

    while(str2[j] != '\0') {
        combined[i] = str2[j];
        i++;
        j++;
    }

    combined[i] = '\0';

    printf("Combined string: %s\n", combined);

    return 0;
}
