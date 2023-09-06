#include <stdio.h>

int main() {
	int x, sucessor, antecessor;
	
	printf("Valor de x: ");
	scanf("%d", &x);
	
	antecessor = x += -1;
	sucessor = x += 2;
	
	printf("\nAntecessor: %d \nSucessor: %d\n", antecessor, sucessor);
	system("pause");
	return 0;
}
