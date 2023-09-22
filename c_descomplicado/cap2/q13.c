#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a, b;
	printf("Valores de a e b: ");
	scanf("%d %d", &a, &b);
	
	int hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
	printf("Hipotenusa: %d\n", hipotenusa);
	
	system("pause");
	return 0; 
}
