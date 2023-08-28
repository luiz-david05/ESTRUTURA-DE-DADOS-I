#include <stdio.h>

void q1();
void q2();
void q3();
void q4();

int main() {
    int choice;

    printf("Escolha a questao (1/2/3/4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            q1();
            break;
        case 2:
            q2();
            break;
        case 3:
            q3();
            break;
        case 4:
        	q4();
        	break;
        default:
            printf("Escolha inv�lida.\n");
            break;
    }

    return 0;
}

void q1() {
    double velocidade_ms;
    printf("Velocidade m/s: ");
    scanf("%lf", &velocidade_ms);

    double velocidade_km = velocidade_ms * 3.6;

    printf("\n%.2f m/s = %.1f km/h\n", velocidade_ms, velocidade_km);
}

void q2() {
    int hr, min;
    printf("Insira as horas e os minutos (ex: 10:30): ");
    scanf("%d:%d", &hr, &min);

    int total_mins = hr * 60 + min;

    printf("\n%d:%d = %d minuto(s)\n", hr, min, total_mins);
}

void q3() {
    int min;
    printf("Minuto(s): ");
    scanf("%d", &min);

    int hr = min / 60;
    int resto_min = min % 60;

    printf("\n%d minuto(s) = %d:%d\n", min, hr, resto_min);
}

void q4() {
	float valor, cotacao;
	printf("Valor em dolar: ");
	scanf("%f", &valor);
	
	printf("Cotacao do dolar: ");
	scanf("%f", &cotacao);
	
	float valor_reais = valor * cotacao;
	printf("\nValor em Reais: %.2f\n", valor_reais);
}


