#include <stdio.h>
#include <stdlib.h>

int ehPar(int n) {
	return n % 2 == 0;
}

int main() {
	int n;
	printf("Numero: ");
	scanf(" %d", &n); 
	
	if (ehPar(n)) {
		printf("%d eh par\n", n);
	}
	else {
		printf("%d eh impar\n", n);
	}
	
	system("pause");
	return 0;
}
