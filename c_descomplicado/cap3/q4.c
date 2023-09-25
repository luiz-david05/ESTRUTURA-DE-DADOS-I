#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario, valorPrestacao;
	printf("Salario: ");
	scanf(" %f", &salario);
	
	printf("Valor da prestacao: ");
	scanf(" %f", &valorPrestacao);
	
	int percentualSalario = salario * 0.20;
	
	if (valorPrestacao > percentualSalario) {
		printf("Emprestimo nao concedido!\n");
	}
	else {
		printf("Emprestimo concedido!\n");
	}
	
	system("pause");
	return 0;
}
