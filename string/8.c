#include <stdio.h>

int main() {
    char str[100];
    int i, vow = 0, cons = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through the string to count vowels and consonants
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check if the character is a vowel
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vow++;  // Count vowels
            } else {
                cons++;  
            }
        }
    }

    
    printf("Total number of vowels: %d\n", vow);
    printf("Total number of consonants: %d\n", cons);

    return 0;
}
