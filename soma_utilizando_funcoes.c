#include <stdio.h>

float soma(float x, float y) {
	return x + y;
}

void pulaLinha(int quantidadeDeLinhas) {
	int cont = 1;
	while(cont <= quantidadeDeLinhas) {
		printf("\n");
		cont++;
	}
}

main() {

	float numero1, numero2, resultado;

	printf("Entre com o primeiro numero : ");
	scanf("%f", &numero1);
	pulaLinha(2);
	printf("Entre com o segundo numero : ");
	scanf("%f", &numero2);
	pulaLinha(5);

	resultado = soma(numero1, numero2);

	printf("Resultado da soma : %.2f", resultado);

}
