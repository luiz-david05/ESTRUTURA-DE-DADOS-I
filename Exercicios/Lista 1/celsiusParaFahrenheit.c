#include <stdio.h>


void converterCelsiusParaFahrenheit(float temp_c, float *temp_f) {
	*temp_f = (9 * temp_c + 160) / 5;
}


int main () {
	float temp_c, temp_f;
	
	printf("Graus Celsius: ");
	scanf("%f", &temp_c);
	
	converterCelsiusParaFahrenheit(temp_c, &temp_f);
	
	printf("Temperatura em Fahrenheit: %.1f\n", temp_f);
	
	return 0;
}
