#include <stdio.h>

void converterDolarParaReal(float valor_dolar, float qtd_dolar, 
float *valor_reais) {
	*valor_reais = valor_dolar * qtd_dolar;
}

int main() {
	float valor_dolar, qtd_dolar, valor_reais;
	
	printf("Valor em dolar: ");
	scanf("%f", &valor_dolar);
	
	printf("Cotacao R$: ");
	scanf("%f", &qtd_dolar);
	
	converterDolarParaReal(valor_dolar, qtd_dolar, &valor_reais);
	
	printf("\n%.2f dolar(es), com uma cotacao de %.2f R$ equivalem: %.2f R$", 
	valor_dolar, qtd_dolar, valor_reais);
	
	return 0;
}
