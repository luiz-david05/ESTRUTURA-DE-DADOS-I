#include <stdio.h>

int main() {
	int hr, min;
	
	printf("Digite o valor em horas e minutos, separados por ':' : ");
	
	scanf("%d:%d", &hr, &min);
	
	int totalMinutos = hr * 60 + min;
	
	printf("%d:%d = %d minuto(s)\n", hr, min, totalMinutos);
	
	return 0;
}
