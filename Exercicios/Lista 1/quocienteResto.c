#include <stdio.h>


void calcularQuocienteResto(int n1, int n2, int *quociente, int *resto_divisao) {
	if (n2 == 0) {
		printf("Nao e possivel dividir por zero\n");
		
		return;
	}
	
	*quociente = n1 / n2;
	*resto_divisao = n1 % n2;
}

int main() {
	int n1, n2, quociente, resto_divisao;
	
	printf("Digite os dois numeros separados por espaco: ");
	scanf("%d %d", &n1, &n2);
	
	calcularQuocienteResto(n1, n2, &quociente, &resto_divisao);
	
	printf("quociente = %d\n", quociente);
	printf("resto da divisao = %d\n", resto_divisao);
	
	return 0;
}
