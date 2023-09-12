#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	printf("valores: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int soma = a + b + c;
	printf("soma = %d\n", soma);
	
	system("pause");
	return 0;
}
