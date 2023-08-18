#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int i, j;
	
	printf("Digite 2 números inteiros e diferentes separados por espaços: ");
	scanf("%d %d", &i, &j);
	
	if(i < j){
		for(i; i <= j; i++){
			printf("%d ", i);
		}
	}else{
		for(i; i >= j; i--){
			printf("%d ", i);	
		}
	}
	return 0;
}
