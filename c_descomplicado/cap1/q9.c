#include <stdio.h>
#include <stdlib.h>

int main() {
	float a, b;
	printf("numeros: ");
	scanf("%f %f", &a, &b);
	
	printf("numeros lidos, na ordem inversa: %f %f\n", b, a);
	
	system("pause");
	return 0;
}
