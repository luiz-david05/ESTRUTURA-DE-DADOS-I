#include <stdio.h>
#include <math.h>


int main() {
	float raio, comprimento;
	double pi = M_PI;
	
	printf("Valor do raio: ");
	scanf("%f", &raio);
	
	comprimento = 2 * pi * raio;
	
	printf("Comprimento da circunferencia: %.2f\n", comprimento);
	
	return 0;
}
