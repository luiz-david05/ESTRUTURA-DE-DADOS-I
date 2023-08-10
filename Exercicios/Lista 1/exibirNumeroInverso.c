#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &n);
    
    int centenas = n / 100;
    int dezenas = (n / 10) % 10;
    int unidades = n % 10;
    
    printf("Número: %d, Dígitos invertidos: %d%d%d\n", n, unidades, dezenas, centenas);
    
    return 0;
}

