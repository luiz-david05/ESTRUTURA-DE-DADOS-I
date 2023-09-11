#include <stdio.h>
#include <stdlib.h>

int main() {
	int dia, mes, ano;
	printf("valor do dia/mes/ano: ");
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	printf("valores lidos: %d dia(s)/%d mes(es)/%d (anos)\n", dia, mes, ano);
	
	system("pause");
	return 0;
}
