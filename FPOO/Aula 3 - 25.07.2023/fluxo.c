#include <stdio.h>
// Entrada- Processamento - Sa�da

int main(){
	int x;
	int y;
	
	//Entrada
	printf("Digite um numero inteiro para x: ");
	scanf("%d",&x);
	
	printf("Digite um numero inteiro para y: ");
	scanf("%d",&y);
	
	//Processamento
	x = x * y;
	
	//Sa�da
	printf("X * Y = %d",x);
	
	return 0;
}
