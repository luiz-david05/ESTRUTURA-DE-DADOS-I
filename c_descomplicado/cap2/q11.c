#include <stdio.h>
#include <stdlib.h>

int main() {
	const float Pi = 3.141592;
	float raio_circulo;
	printf("valor do raio: ");
	scanf("%f", &raio_circulo);
	
	float valor_area = Pi * raio_circulo * raio_circulo;
	printf("valor area = %.2f\n", valor_area);
	
	system("pause");
	return 0;
}
