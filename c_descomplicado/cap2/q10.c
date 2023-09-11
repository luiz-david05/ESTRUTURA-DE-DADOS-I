#include <stdio.h>

int main() {
	float valor = 780000.00, premio1, premio2, premio3;
	
	premio1 = valor * 0.46;
	premio2 = valor * 0.32;
	premio3 = valor * 0.22;
	
	printf("Premio primeiro ganhador: %f\nPremio do segundo ganhador: %f \
	\nPremio do terceiro ganhador: %f\n", premio1, premio2, premio3);
	system("pause");
	return 0;
}
