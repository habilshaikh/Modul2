#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substring[100];
    int start, length;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    printf("Enter the starting position : ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);


    if (start < 0 || start >= strlen(str) || length < 0) {
        printf("Invalid starting position or length.\n");
        return 1;
    }
    strncpy(substring, str + start, length);

    substring[length] = '\0';

    printf("Extracted substring: %s\n", substring);

    return 0;
}
