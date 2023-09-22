#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um número inteiro e mostre o seu complemento 
bit a bit. */

int main() {
	unsigned char numero, complemento;
	printf("Numero: ");
	scanf(" %d", &numero);
	
	complemento = ~numero;
	
	printf("Complemento bit a bit: %d\n", complemento);
	
	system("pause");
	return 0;
}

 
