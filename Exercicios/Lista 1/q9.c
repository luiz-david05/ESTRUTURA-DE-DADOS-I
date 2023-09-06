# include <stdio.h>

int main() {
	float angulo, anguloRadiano;
	
	printf("Angulo em graus: ");
	scanf("%f", &angulo);
	
	anguloRadiano = angulo * 3.14 / 180;
	
	printf("Em radianos: %f\n", anguloRadiano);
	system("pause");
	return 0;
}
