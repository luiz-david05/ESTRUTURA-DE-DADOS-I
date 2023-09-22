#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int numero;
	printf("Numero: ");
	scanf(" %d", &numero);
	
	int resto = numero;
	int c = floor(resto / 100);
	resto %= 100;
	int d = floor(resto / 10);
	int u = resto % 10;
	
	printf("Numero lido: %d\n", numero);
	printf("Numero invertido: %d%d%d\n", u, d, c);
	
	system("pause");
	return 0;
}
