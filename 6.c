#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    int len = strlen(str) - 1;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("String invertida:\n %s", str);

    return 0;
}