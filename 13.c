#include <stdio.h>
#include <string.h>

void substituirPalavra(char *texto, const char *busca, const char *substitui) {
    char resultado[1000];
    char *pos, temp[1000];
    int lenBusca = strlen(busca);

    resultado[0] = '\0';

    while ((pos = strstr(texto, busca)) != NULL) {
        strncpy(temp, texto, pos - texto);
        temp[pos - texto] = '\0';
        strcat(resultado, temp);
        strcat(resultado, substitui);
        texto = pos + lenBusca;
    }

    strcat(resultado, texto);
    strcpy(texto, resultado);
}

int main() {
    char texto[1000], busca[50], substitui[50];

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Digite a palavra a ser substituída: ");
    scanf("%s", busca);

    printf("Digite a nova palavra: ");
    scanf("%s", substitui);

    substituirPalavra(texto, busca, substitui);

    printf("Texto modificado: %s\n", texto);

    return 0;
}
