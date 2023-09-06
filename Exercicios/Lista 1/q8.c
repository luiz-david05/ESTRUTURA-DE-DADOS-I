#include <stdio.h>

int main() {
	float tempCelsius, tempFahrenheit;
	
	printf("Temperatura em graus celsius: ");
	scanf("%f", &tempCelsius);
	
	tempFahrenheit = tempCelsius * (9 / 5) + 32;
	
	printf("Temperatura em graus fahrenheit: %1.f\n", tempFahrenheit);
	system("pause");
	return 0;
}
