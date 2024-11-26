#include <stdio.h>

int main() {
    char str[100];
    int i, comprimento = 0;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        comprimento++;
    }

    printf("O comprimento da string e: %d\n", comprimento);

    return 0;
}