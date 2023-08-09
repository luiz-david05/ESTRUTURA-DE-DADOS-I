#include <stdio.h>

int main() {
	float tempo_viagem, velocidade_media;
	
	scanf("%f", &tempo_viagem);
	scanf("%f", &velocidade_media);
		
	float qtd_combustivel = (tempo_viagem * velocidade_media) / 12;
	
	printf("%.3f\n", qtd_combustivel);
	
	return 0;
}
