#include <stdio.h>

void minutosHorasMinutos(int min, int *hr, int *resto_min) {
    *hr = min / 60;
    *resto_min = min % 60;
}

int main() {
    int min, hr, resto_min;
    
    printf("Valor em minutos: ");
    scanf("%d", &min);
    
    minutosHorasMinutos(min, &hr, &resto_min);
    
    printf("\n%d minuto(s) = %d hora(s) e %d minuto(s)\n", min, hr, resto_min);
    
    return 0;
}

