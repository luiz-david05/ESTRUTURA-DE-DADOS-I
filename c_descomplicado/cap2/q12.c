#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float altura, raio;
	printf("Altura e raio: ");
	scanf("%f %f", &altura, &raio);
	
	float pi = 3.141592;
	float volumeCilindro = pi * pow(raio, 2) * altura; 
	printf("Volume do cilindro: %.1f\n", volumeCilindro);
	
	system("pause");
	return 0;
}
