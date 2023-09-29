#include <stdio.h>
#include <locale.h>
#define SIZE 10


int pilha[SIZE];
int ponteiro = 0;
int i;

void mostraPilha(){
	
	printf("\nPilha:\n");
	
	if(ponteiro > 0){
		for(i = 0; i < ponteiro; i++){
		printf("%d\n", pilha[i]);
		}
	}else{
		printf("Não existe mais elementos para retirar");
	}
		
}

int push(int dado){
	
	if(ponteiro < SIZE){
		pilha[ponteiro] = dado;
		ponteiro++;
		return 1;
	}else{
		return 0;
	}
}

int pop(){
	
	if(ponteiro >= 0){
		ponteiro--;
		return 1;
	}else{
		return 0;
	}

}

int main(){
	
	setlocale(LC_ALL, "");
	
	push(25);
	mostraPilha();
	push(18);
	mostraPilha();
	push(10);
	mostraPilha();
	push(3);
	mostraPilha();
	pop();
	mostraPilha();
	pop();
	mostraPilha();
	pop();
	mostraPilha();
	pop();
	mostraPilha();
	
}
