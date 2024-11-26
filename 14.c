#include <stdio.h>

void cifraCesar(char *texto, int chave) {
    for (int i = 0; texto[i] != '\0'; ++i) {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
            texto[i] = (texto[i] - 'A' + chave) % 26 + 'A';
        else if (texto[i] >= 'a' && texto[i] <= 'z')
            texto[i] = (texto[i] - 'a' + chave) % 26 + 'a';
    }
}

int main() {
    char texto[100];
    int chave;

    printf("Digite o texto: ");
    fgets(texto, sizeof(texto), stdin);

    printf("Digite a chave: ");
    scanf("%d", &chave);

    cifraCesar(texto, chave);

    printf("Texto cifrado: %s\n", texto);

    return 0;
}
