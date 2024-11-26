#include <stdio.h>
#include <string.h>

int main() {
    char str1[101], str2[101];

    printf("Digite uma string:\n ");
    fgets(str1, 101, stdin);

    printf("A string digitada foi: %s", str1);

    printf("Digite duas strings:\n ");
    printf("Primeira string: \n");
    fgets(str1, 101, stdin);
    printf("Segunda string: \n");
    fgets(str2, 101, stdin);

    printf("As strings digitadas foram:\n%s%s", str1, str2);

    return 0;
}