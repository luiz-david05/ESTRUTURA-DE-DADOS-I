#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b;
	printf("numeros: ");
	scanf("%d %d", &a, &b);
	
	printf("numeros lidos, na ordem inversa: %d %d\n", b, a);
	
	system("pause");
	return 0;
}
