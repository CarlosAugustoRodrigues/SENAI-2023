#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int n, fat;
	
	printf("Digite um n�mero inteiro e positivo: ");
	scanf("%d", &n);
	
	int aux = n;
	
	for(fat = 1; n > 1; n--){
		fat *= n;
	}
	
	printf("O fatorial de %d � = %d", aux, fat);
	
	return 0;
}
