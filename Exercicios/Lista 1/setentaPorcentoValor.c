#include <stdio.h>


int main() {
	float valor_real, setenta_porcento_valor;
	
	printf("Valor em R$: ");
	scanf("%f", &valor_real);
	
	setenta_porcento_valor = valor_real * 0.70;
	
	printf("Setenta porcento de R$ %.2f = %.2f R$\n", valor_real, setenta_porcento_valor);
	
	return 0;
}
