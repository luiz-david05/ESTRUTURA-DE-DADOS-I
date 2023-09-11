#include <stdio.h>

int main() {
	int x, y, z;
	
	printf("Valores de x, y e z: ");
	scanf("%d %d %d", &x, &y, &z);
	
	int soma = x + y + z;
	
	printf("Soma dos valores = %d\n", soma);
	system("pause");
	return 0;
}
