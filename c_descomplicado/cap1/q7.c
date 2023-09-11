#include <stdio.h>
#include <stdlib.h>

int main() {
	char c;
	printf("caractere: ");
	scanf("%c", &c);
	
	printf("caractere lido: %d\n", c); // exibe o codigo do caractere de acordo com a tabela ascii
	
	system("pause");
	return 0;
} 
