#include <stdio.h>
#include <stdlib.h>

int main() {
	int numero_real;
	printf("numero real: ");
	scanf("%d", &numero_real);
	
	int quinta_parte = numero_real /= 5;
	printf("quinta parte = %d\n", quinta_parte);
	
	system("pause");
	return 0;
}
