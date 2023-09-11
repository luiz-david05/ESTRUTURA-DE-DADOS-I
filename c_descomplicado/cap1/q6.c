#include <stdio.h>
#include <stdlib.h>

int main() {
	double n;
	printf("valor: ");
	scanf("%f", &n);
	
	printf("valor lido em notacao cientifica: %e\n", n);
	
	system("pause");
	return 0;
}
