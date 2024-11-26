#include <stdio.h>
#include <string.h>

int main() {
    char frase[200];
    char *palavra;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    palavra = strtok(frase, " \n");

    while (palavra != NULL) {
        printf("%s\n", palavra);
        palavra = strtok(NULL, " \n");
    }

    return 0;
}
