#include <stdio.h>
#include <stdlib.h>

int main() {
	float temp_celsius;
	printf("temperatura em graus celsius: ");
	scanf("%f", &temp_celsius);
	
	float temp_fahren = temp_celsius * (9 / 5) + 32;
	printf("temperatura em graus fahrenheit: %.1f\n", temp_fahren);
	
	system("pause");
	return 0;
}
