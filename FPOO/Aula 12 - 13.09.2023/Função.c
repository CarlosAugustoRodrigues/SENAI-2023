#include <stdio.h>
#include <locale.h>
#include <conio.h>

//Função que retorna a soma de dois parâmetros inteiros
int soma(int a, int b){
	return a + b;
}

//Função que retorna a média de dois parâmetros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

//Exemplo de um procedimento que escreve uma frase 100 vezes
int procedimentoBart(){
	int i;
	for(i = 0; i < 100; i++){
		printf("Não vou atormentar a Lisa!\n");
	}
}

//Procedimento que escreve uma frase qualquer N vezes
int frases(char frase[], int n){
	int i;
	for( i = 0; i < n; i++){
		printf("%s\n", frase);
	}
}

int main(){
	
	setlocale(LC_ALL, "");
	
	frases("Palmeiras não tem mundial", 5);
	
	return 0;
}
