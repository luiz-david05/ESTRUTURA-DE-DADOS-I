#include <stdio.h>

int ehPar (int *n) {
	if (*n % 2 == 0) {
		return 1;
	}
	
	return 0;
}


int ehPositivo (int *n) {
	if (*n >= 0) {
		return 1;
	}
	
	return 0;
}


int main() {
	int a, b, c, d;
	
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	if (b > c && d > a && c + d > a + b && ehPositivo(&c) && ehPositivo(&d)
	 && ehPar(&a)) {
	 	printf("Valores aceitos\n");
	 }
	 
	 else {
	 	printf("Valores nao aceitos\n");
	 }
	 
	 return 0;
}
