#include <stdio.h>

int main() {
	int n, i;
	
	printf("digite o valor n: ");
	
	scanf("%d", &n);
	
	printf("Contando de 1 até %d\n", n);
	for (i = 1; i <= n; i++){
		printf("%d\n", i);
	}
	
	return 0;
}
