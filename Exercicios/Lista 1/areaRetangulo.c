#include <stdio.h>


int main() {
	float base, altura, area;
	
	printf("Valor da base e da altura: ");
	scanf("%f %f", &base, &altura);
	
	area = base * altura;
	
	printf("Area = %.1f\n", area);
	
	return 0;
}
