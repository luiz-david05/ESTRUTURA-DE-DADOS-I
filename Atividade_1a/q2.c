#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char frase[20]={"uma frase"};
int main() {
	int i;
	int tamanho = strlen(frase);
	
	for (i = 0; i < tamanho; i++) {
		printf("%c\n", frase[i]);
	}
	
	system("pause");
	return 0;
}
