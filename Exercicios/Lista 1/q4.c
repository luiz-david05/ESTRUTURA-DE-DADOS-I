#include <stdio.h>

int main() {
	float n1, n2, n3, n4;
	
	printf("Digite as quatro notas: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	float media = (n1 + n2 + n3 + n4) / 4;
	
	printf("Media aritmetica dos valores: %1.f\n", media);
	system("pause");
	return 0;
}
