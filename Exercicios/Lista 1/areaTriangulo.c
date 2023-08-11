#include <stdio.h>


int main() {
	float base, altura, area;
	
	printf("Valores da base e altura: ");
	scanf("%f %f", &base, &altura);
	
	area = (base * altura) / 2;
	
	printf("Area = %.1f\n", area);
	
	return 0;
}
