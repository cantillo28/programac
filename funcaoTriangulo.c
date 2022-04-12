#include <stdio.h>
#include <locale.h>


int valor(int a, int b, int c){
	if ((a == b) && (a == c) ){
		printf("Triangulo equilátero \n");
	} else {
		if ((a == b) || (a == c) || (b == c)){
			printf("Triangulo isósceles \n");
		}else{
			printf("Triangulo escaleno \n");
		}
	}
}
	 


main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	
	printf("\n Digite o valor para A: ");
	scanf("%d", &a);
	
	printf("\n Digite o valor para B: ");
	scanf("%d", &b);
	
	printf("\n Digite o valor para C: ");
	scanf("%d", &c);
	
	valor(a, b, c);
	
	
	
	
}
