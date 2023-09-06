#include <stdio.h>

int main() {
	float vMs, vKm;
	
	printf("Velocidade em km/h: ");
	scanf("%f", &vKm);
	
	vMs = vKm / 3.6;
	
	printf("Velocidade em m/s: %1.f\n", vMs);
	system("pause");
	return 0;
}
