#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int n1, n2, n3, n4, n5;
	int troca;
	
	printf("Digite 5 n�meros (separados por espa�os): ");
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	
	if(n1 > n5){
		troca = n1;
		n1 = n5;
		n5 = troca;
	}
	if(n1 > n4){
		troca = n1;
		n1 = n4;
		n4 = troca;
	}
	if(n1 > n3){
		troca = n1;
		n1 = n3;
		n3 = troca;
	}
	if(n1 > n2){
		troca = n1;
		n1 = n2;
		n2 = troca;
	}
	if(n2 > n5){
		troca = n2;
		n2 = n5;
		n5 = troca;
	}
	if(n2 > n4){
		troca = n2;
		n2 = n4;
		n4 = troca;
	}
	if(n2 > n3){
		troca = n2;
		n2 = n3;
		n3 = troca;
	}
	if(n3 > n5){
		troca = n3;
		n3 = n5;
		n5 = troca;
	}
	if(n3 > n4){
		troca = n3;
		n3 = n4;
		n4 = troca;
	}
	if(n4 > n5){
		troca = n4;
		n4 = n5;
		n5 = troca;
	}
	
	printf("\nOs n�meros em ordem crescente �: %d %d %d %d %d", n1, n2, n3, n4, n5);
			
	return 0;
}
