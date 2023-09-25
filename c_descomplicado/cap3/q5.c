#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("Numero: ");
	scanf(" %d", &n);
	
	int quadrado = pow(n, 2);
	float raiz = sqrt(n);
	
	if (n > 0) {
		printf("Numero digitado ao quadrado: %d\n", quadrado);
		printf("Raiz quadrada do numero digitado: %.1f\n", raiz);
	}
	else {
		printf("Numero negativo\n");
	}
	
	system("pause");
	return 0;
}
