#include <stdio.h>
#include <stdlib.h>

int main() {
	char c = 'a';
	int i = 0;
	float b = 1.0;
	
	printf("%c %d %1.1f\n", c, i, b);
	printf("\n%c	%d	%1.1f\n", c, i, b);
	printf("\n%c\n%d\n%1.1f\n", c, i, b);
	
	system("pause");
	return 0;
}
