#include <stdio.h>


void calcularAumentoSalarial(float salario_atual, float *novo_salario) {
 		*novo_salario = salario_atual + salario_atual * 0.25 ;
}


int main() {
	float salario_atual, novo_salario;
	
	printf("Valor do salario atual R$: ");
	scanf("%f", &salario_atual);
	
	calcularAumentoSalarial(salario_atual, &novo_salario);
	
	printf("Novo salario calculado>>> = R$ %.2f\n", novo_salario);
	
	return 0;
}
