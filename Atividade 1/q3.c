/* Leia duas strings e compare, se elas forem iguais, imprima “São iguais”, senão imprima “São
diferentes!!”:
A) As duas strings devem ser definidas como char[10], conforme abaixo:*/

#include <stdio.h>
char f1[10];
char f2[10];

int main() {
    printf("Digite a primeira string: ");
    scanf("%9s", f1); /* limitar a leitura a 9 caracteres,
	deixar espa�o para o caractere nulo */
    f1[9] = '\0';
    
    printf("Digite a segunda string: ");
    scanf("%9s", f2);
    f2[9] = '\0';
    
    if (strcmp (f1, f2) == 0) {
        printf("São iguais\n");
    } else {
        printf("São diferentes\n");
    }
    return 0;
    
}
