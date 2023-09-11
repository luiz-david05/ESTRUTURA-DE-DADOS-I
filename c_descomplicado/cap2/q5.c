#include <stdio.h>

int main() {
	int idade, anoAtual;
	
	printf("Digite a idade e o ano atual: ");
	scanf("%d %d", &idade, &anoAtual);
	
	int anoNascimento = anoAtual - idade;
	
	printf("Ano de nascimento: %d\n", anoNascimento);
}
