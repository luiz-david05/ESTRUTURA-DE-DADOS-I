#include <stdio.h>
#include <stdlib.h>

int main() {
	int ano_atual, idade;
	printf("ano atual e idade: ");
	scanf("%d %d", &ano_atual, &idade);
	
	int ano_nascimento = ano_atual -= idade;
	printf("ano de nascimento: %d\n", ano_nascimento);
	
	system("pause");
	return 0;
}
