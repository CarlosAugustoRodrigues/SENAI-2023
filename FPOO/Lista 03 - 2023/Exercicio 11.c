#include <stdio.h>
#include <locale.h>

int main(){
	
	
	setlocale(LC_ALL, "");
	
	int n[5], contador, i, aux;
	
	printf("Digite 5 números inteiros em qualquer ordem:\n");
	for(contador = 0; contador < 5; contador++){
		scanf("\n%d", &n[contador]);
	}
	
	printf("\nNúmeros não ordenados: ");
	for(contador = 0; contador < 5; contador++){
		printf("[%d ]", n[contador]);
	}
	
	for(contador = 0; contador < 5; contador++){
		for(i = 0; i < 4; i++){
			if(n[i] > n[i+1]){
				aux = n[i];
				n[i] = n[i+1];
				n[i+1] = aux;
			}
		}
	}
	
	printf("\n\nNúmeros em ordem crescente: ");
	for(contador = 0; contador < 5; contador++){
		printf("%d ", n[contador]);
	}
	return 0;
}
