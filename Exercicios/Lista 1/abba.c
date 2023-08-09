#include <stdio.h>

int main() {
	int a, b;
	
	printf("Digite valor a e valor b separados por espaco: ");
	scanf("%d %d", &a, &b);
	
	printf("Numeros na ordem inversa: %d - %d", b, a);
	
	return 0;
}
