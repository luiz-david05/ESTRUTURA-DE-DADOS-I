#include <stdio.h>
#include <stdlib.h>

int main() {
	float a, b, c, d;
	printf("valores notas: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	float media = (a + b + c + d) / 4;
	printf("media = %1.1f\n", media);
	
	system("pause");
	return 0;
}
