#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um n�mero inteiro e mostre a multiplica��o e a 
divis�o desse n�mero por dois (utilize os operadores de deslocamento de bits). */

int main() {
	int numero;
	printf("Numero: ");
	scanf(" %d", &numero);
	
	printf("Multiplicacao: %d\n", numero << 2);
	printf("Divisao: %d\n", numero >> 2);
	
	system("pause");
	return 0;
}
