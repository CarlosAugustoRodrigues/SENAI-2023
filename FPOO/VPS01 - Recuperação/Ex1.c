#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int n[2], soma, i;
	
	printf("Digite dois n�meros inteiros: ");
	for(i = 0; i < 2; i++){
		scanf("%d", &n[i]);
		soma += n[i];
	}
	
	printf("\nA soma dos n�meros digitados � = %d", soma);
	
	return 0;
}
