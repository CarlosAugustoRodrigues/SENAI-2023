#include <locale.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int n[3], media, i;
	
	printf("Digite tr�s n�meros inteiros: ");
	for(i = 0; i < 3; i++){
		scanf("%d", &n[i]);
		media += n[i];
	}
	
	media = media / 3;
	
	printf("\nA m�dia � = %d", media);
	
	return 0;
}
