#include <stdio.h>
#include <stdlib.h>

int main() {
	float valor = 780000.00;
	float premio_1 = valor * 0.46;
	float premio_2 = valor * 0.32;
	float premio_3 = valor * 0.22;
	printf("valor premio primeiro ganhador: %.2f\n", premio_1);
	printf("valor premio segundo ganhador: %.2f\n", premio_2);
	printf("valor premio terceiro ganhador: %.2f\n", premio_3);
	
	system("pause");
	return 0;
}
