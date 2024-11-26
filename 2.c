#include <stdio.h>
#include <string.h>

void concatenar(char str1[], char str2[], char resultado[]) {
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        resultado[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        resultado[i + j] = str2[j];
    }
    resultado[i + j] = '\0';
}

int main() {
    char resultado[200];
    char str1[100], str2[100];
    printf("Primeira string: \n");
    fgets(str1, 100, stdin);
    printf("Segunda string: \n");
    fgets(str2, 100, stdin);
    concatenar(str1, str2, resultado);
    printf("A string concatenada e: %s", resultado);
    return 0;
}