#include <stdio.h>
#include <stdlib.h>

/*  Elabore um programa que leia dois n�meros inteiros e exiba o deslocamento, � 
esquerda e � direita, do primeiro n�mero pelo segundo. */

int main() {
	int x, y;
	printf("Valores x e y: ");
	scanf(" %d %d", &x, &y);
	
	printf("Deslocamento a esquerda: %d\n", x << y);
	printf("Deslocamento a direita: %d\n", x >> y);
	
	system("pause");
	return 0;
}
