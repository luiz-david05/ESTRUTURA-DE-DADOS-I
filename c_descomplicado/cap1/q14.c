#include <stdio.h>
#include <stdlib.h>

int main() {
	char a, b, c;
	printf("digite os tres caracteres: ");
	scanf("%c %c %c", &a, &b, &c);
	
	printf("caracteres lidos: %c\n%c\n%c\n", a, b, c);
	
	system("pause");
	return 0;
}
