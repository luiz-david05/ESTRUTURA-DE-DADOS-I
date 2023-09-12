#include <stdio.h>
#include <stdlib.h>

int main() {
	float valor_reais, cotacao_dolar;
	printf("valor em reais e a cotacao do dolar: ");
	scanf("%f %f", &valor_reais, &cotacao_dolar);
	
	float valor_dolar = valor_reais / cotacao_dolar;
	printf("valor em dolar: %.2f\n", valor_dolar);
	
	system("pause");
	return 0;
}
