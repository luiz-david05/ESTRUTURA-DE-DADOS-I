#include <stdio.h>

void kmParaMs(float v_km, float *v_ms) {
	*v_ms = v_km / 3.6;		
}


int main() {
	float v_km, v_ms;
	
	printf("Velocidade em km/h: ");
	scanf("%f", &v_km);
	
	kmParaMs(v_km, &v_ms);
	
	printf("%.2f km/h = %.2f m/s\n", v_km, v_ms);
	
	return 0;
}
