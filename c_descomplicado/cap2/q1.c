#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("numero: ");
	scanf("%d", &n);
	
	int antecessor = n -= 1;
	int sucessor = n += 2; 
	
	printf("antecessor = %d\nsucessor = %d\n", antecessor, sucessor);
	
	system("pause");
	return 0;
}
