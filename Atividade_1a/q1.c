#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char frase[20];

int main() {
	printf("Digite o valor: ");
	scanf("%s", frase);
	
	int tamanho = strlen(frase);
	
	printf("\nTamanho da frase: %d\n", tamanho);
	
	system("pause");
	return 0;
}
