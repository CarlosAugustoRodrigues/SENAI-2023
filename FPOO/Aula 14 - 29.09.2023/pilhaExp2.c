#include <stdio.h>
#define SIZE 6

int pilha[SIZE];
int i;
int ponteiro = 0;

void mostraPilha(){
	
	printf("Pilha: ");
	
	for(i = 0; i < SIZE; i++){
		printf("%d\n", pilha[i]);
	}
}

void push(int dado){
	pilha[ponteiro] = dado;
	ponteiro++;
	
	if(ponteiro == SIZE){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	mostraPilha();
}
