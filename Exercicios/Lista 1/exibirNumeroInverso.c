#include <stdio.h>

int main() {
    int n;
    
    printf("Digite um n�mero de 3 d�gitos: ");
    scanf("%d", &n);
    
    int centenas = n / 100;
    int dezenas = (n / 10) % 10;
    int unidades = n % 10;
    
    printf("N�mero: %d, D�gitos invertidos: %d%d%d\n", n, unidades, dezenas, centenas);
    
    return 0;
}

