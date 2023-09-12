#include <stdio.h>
#include <stdlib.h>

int main() {
	float vKm;
	printf("velocidade em km/h: ");
	scanf("%f", &vKm);
	
	float vMs = vKm /= 3.6;
	printf("velocidade em m/s: %1.1f\n", vMs);
	
	system("pause");
	return 0;
}
