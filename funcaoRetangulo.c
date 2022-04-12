#include <stdio.h>
#include <locale.h>


int valor(int a, int b){
	if (a == b){
		printf("Quadrado \n");
	 } else{
	    printf("Retângulo \n");
	}
	 
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("\n Digite o valor para A: ");
	scanf("%d", &a);
	
	printf("\n Digite o valor para B: ");
	scanf("%d", &b);
	
	valor(a, b);
	
	system("PAUSE");
	
	
	
	
}
