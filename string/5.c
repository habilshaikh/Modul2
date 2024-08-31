#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, are_equal = 1;

     
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

       while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            are_equal = 0;
            break;
        }
        i++;
    }

    // If are_equal is still 1, strings are equal, otherwise they're not
    if (are_equal) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}
