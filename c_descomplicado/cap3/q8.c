#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int idade;
    printf("Idade do nadador: ");
    scanf(" %d", &idade);
    char categoria[10];

    if (idade >= 5 && idade <= 7) {
        strcpy(categoria, "Infantil A");
    }
    else if (idade >= 8 && idade <= 10) {
        strcpy(categoria, "Infantil B");
    }
    else if (idade >= 11 && idade <= 13) {
        strcpy(categoria, "Juvenil A");
    }
    else if (idade >= 14 && idade <= 17) {
        strcpy(categoria, "Juvenil B");
    }
    else if (idade >= 18) {
        strcpy(categoria, "Senior");
    }

    printf("Categoria: %s\n", categoria);

    system("pause");
    return 0;
}

