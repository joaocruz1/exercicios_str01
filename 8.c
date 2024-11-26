#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    int i = 0;
    while (str[i] == ' ' || str[i] == '\t') {
        i++;
    }
    int j = 0;
    while (str[i] != '\0') {
        str[j++] = str[i++];
    }
    str[j] = '\0';

    printf("String sem espaços no início:\n %s", str);

    return 0;
}