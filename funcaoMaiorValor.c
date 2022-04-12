#include <stdio.h>
#include <locale.h>


int maior(int a, int b){
	if (a > b){
		printf("O maior valor é: %d \n", a);
	 } else{
	    printf("O maior valor é: %d \n", b);
	}
	 
}

main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("\n Digite o valor para A: ");
	scanf("%d", &a);
	
	printf("\n Digite o valor para B: ");
	scanf("%d", &b);
	
	maior(a, b);
	
	
	
	
}
