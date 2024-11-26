#include <stdio.h>

char *minha_strstr(const char *str, const char *substr) {
    while (*str) {
        const char *p = str;
        const char *q = substr;

        while (*q && *p == *q) {
            p++;
            q++;
        }

        if (*q == '\0') {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str[100], substr[50];
    
    printf("Digite a string principal: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Digite a substring a ser encontrada: ");
    fgets(substr, sizeof(substr), stdin);
    
    if (minha_strstr(str, substr)) {
        printf("Substring encontrada.\n");
    } else {
        printf("Substring não encontrada.\n");
    }
    
    return 0;
}
