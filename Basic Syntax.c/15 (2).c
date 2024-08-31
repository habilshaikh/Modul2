#include <stdio.h>
#include <string.h>


char to_upper(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    }
    return ch;
}

void abbreviate_country(const char* name, char* abbreviation) {
    int j = 0 ,i;
    for ( i = 0; name[i] != '\0'; i++) {
        
        if (i == 0 || name[i-1] == ' ') {
            abbreviation[j++] = to_upper(name[i]);
        }
    }
    abbreviation[j] = '\0';  
}

int main() {
    char country_name[100];
    char abbreviation[10];  

    printf("Enter the country's name: ");
    fgets(country_name, sizeof(country_name), stdin);

    size_t len = strlen(country_name);
    if (len > 0 && country_name[len] == '\n') {
        country_name[len - 1] = '\0';
    }


    abbreviate_country(country_name, abbreviation);
    
    printf("Abbreviation: %s\n", abbreviation);

    return 0;
}

