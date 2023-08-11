#include <stdio.h>

/* No exemplo, percorra a “frase” e imprima os valores caractere a caractere na tela do computador. O laço
de repetição deve percorrer “frase” até que ele encontre o final da string. (caractere especial para fim da
string igual a ‘\0’.
*/


int main() {
	char frase[20]={"uma frase"};
	int i = 0;
	
	// problema com o compilador 
	for (; frase[i] != '\0'; i++) {
		if (frase[i] == 0) {
			break;
		}
		
		printf("[%d] %c\n", i, frase[i]);
	}
	
	return 0;
}
