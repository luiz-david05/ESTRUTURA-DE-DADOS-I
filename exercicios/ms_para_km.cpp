#include <stdio.h>

int main() {
	float vMs, vKm;
	
	printf("Velocidade m/s: ");
	
	scanf("%f", &vMs);
	
	printf("\n%.1f m/s = %.1f km/h", vMs, vMs * 3.6);
	
	return 0;
}
