#include <stdio.h>


void calcularMediaPonderada(float n1, float n2, float n3, 
int p1, int p2, int p3, float *media_ponderada) {
	*media_ponderada = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
}


int main() {
	float n1, n2, n3;
	int p1, p2, p3;
	
	printf("Digite as notas separadas por espaco: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	printf("Digite os pesos da mesma forma que as notas: ");
	scanf("%d %d %d", &p1, &p2, &p3);
	
	float media_ponderada; 
	
	calcularMediaPonderada(n1, n2, n3, p1, p2, p3, &media_ponderada);
	
	printf("Média = %.1f\n", media_ponderada);
	
	return 0;
}
