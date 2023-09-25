#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	printf("Digite os dois numeros: ");
	scanf(" %d  %d", &a, &b);
	
	int maior = a > b ? a: b;
	
	printf("%d eh o maior\n", maior);
	
	system("pause");
	return 0;
}
