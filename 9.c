#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    i = 0;
    j = strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            printf("Não é um palíndromo.\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("É um palíndromo.\n");

    return 0;
}