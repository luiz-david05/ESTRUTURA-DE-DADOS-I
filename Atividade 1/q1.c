#include <stdio.h>

/* No programa abaixo, complete o c�digo calculando e 
imprimindo qual o tamanho do cadeia de caracteres que foi inclu�da pelo usu�rio. */

char frase[20];

int main() {
	printf("Digite o valor: ");
	scanf("%s", frase);
	
	char *ponteiro = frase;
	int tamanho = 0;
	
	while (*ponteiro != '\0') {
		tamanho++;
		ponteiro++;
	}
	
	printf("Tamanho do valor digitado: %d\n", tamanho);
	
	return 0;
}
