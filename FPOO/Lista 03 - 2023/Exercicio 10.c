#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int n[10], maior, i;
	
	printf("Digite 10 números inteiros:\n");
	
	for(i = 0; i < 10; i++){
		scanf("\n%d", &n[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(n[i] > maior){
			maior = n[i];
		}
	}
	
	printf("\n\nO maior número da sequência digitada é: %d", maior);
	
	return 0;
}
