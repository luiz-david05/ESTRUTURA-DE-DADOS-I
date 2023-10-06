#include <stdio.h>
#include <string.h>

char f1[10];
char f2[10];

int main() {
    printf("Digite a primeira string: ");
    scanf("%s", f1);

    printf("Digite a segunda string: ");
    scanf("%s", f2);

    if (strcmp(f1, f2) == 0) {
        printf("\nSao iguais\n");
    } else {
        printf("\nSao diferentes!!\n");
    }

    return 0;
}

