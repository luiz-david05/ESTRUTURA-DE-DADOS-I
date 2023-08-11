#include <stdio.h>
#include <math.h>


int main() {
	float raio, volume;
	double pi = M_PI;
	
	printf("Valor do raio: ");
	scanf("%f", & raio);
	
	volume = (4 * pi * pow(raio, 3)) / 3;
	
	printf("Volume = %.2f\n", volume);
	
	return 0;
}
