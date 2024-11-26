#include <stdio.h>

int main() {
    char str[100], caractere1, caractere2;
    int i;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    printf("Digite o caractere a ser substituído: ");
    scanf(" %c", &caractere1);

    printf("Digite o caractere substituto: ");
    scanf(" %c", &caractere2);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == caractere1) {
            str[i] = caractere2;
        }
    }

    printf("String após a substituição: %s", str);

    return 0;
}