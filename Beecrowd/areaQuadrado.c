#include <stdio.h>


int main() {
	float lado, area;
	
	printf("Valor do lado: ");
	scanf("%f", &lado);
	
	area = lado * lado;
	
	printf("Area = %.1f\n", area);
	
	return 0;
}
