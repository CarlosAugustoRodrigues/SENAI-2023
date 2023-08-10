#include <stdio.h>
// Entrada- Processamento - Saída

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
	
	//Saída
	printf("X * Y = %d",x);
	
	return 0;
}
