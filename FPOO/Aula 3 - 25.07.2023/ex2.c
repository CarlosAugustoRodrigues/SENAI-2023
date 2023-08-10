#include <stdio.h>

int main (){
	
	int a;
	int b;
	int c;
	int x;
	
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	
	printf("Digite o valor de b: ");
	scanf("%d",&b);
	
	printf("Digite o valor de c: ");
	scanf("%d",&c);
	
	x = (a+b)/c;
	
	printf("O resultado de x = %d",x);
	
	return 0;
	
}
