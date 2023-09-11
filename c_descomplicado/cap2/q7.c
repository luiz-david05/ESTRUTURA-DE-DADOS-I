#include <stdio.h>

int main() {
	float valor, cotacao;
	
	printf("Digite o valor e a cotacao do dolar: ");
	scanf("%f %f", &valor, &cotacao);
	
	float valorReais = valor * cotacao;
	
	printf("Valor em reais: %2.f\n", valorReais);
	system("pause");
	return 0;
}
