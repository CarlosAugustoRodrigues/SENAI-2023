#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int buscarVetor(int vetor[], int quantNum, int valorProcurado){
	
	int i, posicaoVetor = -1;
	
	for(i = 0; i < quantNum; i++){
		if(valorProcurado == vetor[i]){
			posicaoVetor = i;
			break;
		}
	}
	
	return (posicaoVetor);
}

int main(){
	
	setlocale(LC_ALL, "");
	
	int i, quantNum, intervalo;
	
	printf("Digite a quantidade de números aleatórios, e o intervalo (iniciando do 0): ");
	scanf("%d %d", &quantNum, &intervalo);
	
	srand(time(NULL));
	
	int vetor[quantNum];
	
	for(i = 0; i < quantNum; i++){
		vetor[i] = rand() % (intervalo + 1);
	}
	
	for(i = 0; i < quantNum; i++){
		printf("|%d| ", vetor[i]);
	}
	
	int valorProcurado;
	
	printf("\n\nDigite um número da sequência acima: ");
	scanf("%d", &valorProcurado);
	
	int resultadoBusca = buscarVetor(vetor, quantNum, valorProcurado);
	
		if(resultadoBusca == -1){
			printf("\nValor não encontrado");
		}else{
			printf("\nA posição do número %d no vetor é %d", valorProcurado, resultadoBusca);
		}
	
	
	
	return 0;
}
