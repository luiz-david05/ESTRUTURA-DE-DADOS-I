#include <stdio.h>
#include <stdlib.h>

int main() {
	const int Pi = 3.141592;
	int angulo_graus;
	printf("valor do angulo em graus: ");
	scanf("%d", &angulo_graus);
	
	int radianos = angulo_graus * Pi/180;
	printf("convertido para radiano: %d\n", radianos);
	
	system("pause");
	return 0;
}
