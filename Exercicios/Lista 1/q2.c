#include <stdio.h>

int main() {
	int x, quintaParte;
	
	printf("Valor de x: ");
	scanf("%d", &x);
	
	quintaParte = x / 5;
	
	printf("Quinta parte de %d = %d\n", x, quintaParte);
	system("pause");
	return 0;
}
