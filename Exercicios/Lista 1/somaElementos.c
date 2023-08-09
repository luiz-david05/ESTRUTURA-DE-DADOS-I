#include <stdio.h>

void somarElementos(int n, int *c, int *d, int *u) {
    *c = n / 100;
    n %= 100;
    *d = n / 10;
    *u = n % 10;
}

int main() {
    int n, c, d, u;
    
    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &n);
    
    somarElementos(n, &c, &d, &u);
    
    printf("Soma dos elementos de %d = (%d + %d + %d): %d\n",
           n, c, d, u, c + d + u);
    
    return 0;
}

