#include <stdio.h>
#include <stdlib.h>

int main() {
	float altura;
	char sexo;
	float pesoIdeal;
	printf("Infome a altura e o sexo: ");
	scanf(" %f %c", &altura, &sexo);
	
	if (sexo == 'h') {
		pesoIdeal = 72.7 * altura - 58;
	}
	else {
		pesoIdeal = 62.1 * altura - 44.7;
	}
	
	printf("Peso ideal: %.1f\n", pesoIdeal);
	
	system("pause");
	return 0;
}
