#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float valor;
    char uf[3];
    printf("Valor do produto: ");
    scanf("%f", &valor);
    
    printf("UF: ");
    scanf("%s", uf);
    
    if (strcmp(uf, "MG") == 0) {
        valor += valor * 0.07;
    }
    else if (strcmp(uf, "SP") == 0) {
        valor += valor * 0.12;
    }
    else if (strcmp(uf, "RJ") == 0) {
        valor += valor * 0.15;
    }
    else if (strcmp(uf, "MS") == 0) {
        valor += valor * 0.08;
    }
    else {
        printf("Estado digitado eh invalido!\n");
        valor = 0;
    }
    
    if (valor != 0) {
        printf("Preco final do produto acrescido de imposto: R$ %.2f\n", valor);
    }
    
    system("pause");
    return 0;
}

