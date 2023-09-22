#include <stdio.h>
#include <ctype.h>

int main() {
    char letra;
    
    printf("Digite a letra: ");
    scanf(" %c", &letra);
    
    letra += 32;
    printf("Letra minuscula: %c\n", letra);
    
    system("pause");
    return 0;
}

