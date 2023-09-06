#include <locale.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int n[3], media, i;
	
	printf("Digite três números inteiros: ");
	for(i = 0; i < 3; i++){
		scanf("%d", &n[i]);
		media += n[i];
	}
	
	media = media / 3;
	
	printf("\nA média é = %d", media);
	
	return 0;
}
