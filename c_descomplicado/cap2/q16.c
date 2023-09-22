#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um número inteiro e mostre a multiplicação e a 
divisão desse número por dois (utilize os operadores de deslocamento de bits). */

int main() {
	int numero;
	printf("Numero: ");
	scanf(" %d", &numero);
	
	printf("Multiplicacao: %d\n", numero << 2);
	printf("Divisao: %d\n", numero >> 2);
	
	system("pause");
	return 0;
}
