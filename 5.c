#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Em maiúsculas: %s", str);

    for (i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("\nEm minúsculas: %s", str);

    return 0;
}