#include <stdio.h>

int main() {
	int n1, n2, n3;
	
	printf("Digite os tres numeros com um espaco entre eles(ex: 1 2 3): ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	int soma_dois_primeiros = n1 + n2;
	int subtracao_dois_ultimos = n2 - n3;
	
	printf("Soma entre os dois primeiros: %d\n", soma_dois_primeiros);
	printf("Subtracao entre os dois ultimos: %d\n", subtracao_dois_ultimos);
	
	return 0;
}
