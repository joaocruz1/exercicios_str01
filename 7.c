#include <stdio.h>

int main() {
    char str[100], caractere;
    int i, contador = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &caractere);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == caractere) {
            contador++;
        }
    }

    printf("O caractere '%c' aparece %d vezes.\n", caractere, contador);

    return 0;
}