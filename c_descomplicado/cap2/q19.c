#include <stdio.h>
#include <stdlib.h>

/* elabore um programa que leia dois números inteiros e exiba o resultado das 
  operações de “ou exclusivo”, “ou bit a bit” e “e bit a bit” entre eles. */ 

int main() {
	unsigned char x, y, z;
	printf("Digite dois numeros: ");
	scanf(" %d %d", &x, &y);
	
	z = x ^ y;
	printf("Operacao OU exclusivo: %d\n", z);
	z = x | y;
	printf("Operacao Ou: %d\n", z);
	z = x & y;
	printf("Operacao E: %d\n", z);
	
	system("pause");
	return 0;
}
