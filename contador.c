#include<stdio.h>
#include<locale.h>

main(){
	
	int num1, num2;
	
	printf("Digite o primero número: \n");
	scanf("%d", &num1);
		
	printf("Digite o segundo número: \n");
	scanf("%d", &num2);
	
	printf("\n");
	while (num1 < (num2 + 1)){
	printf("%d\n", num1);
	num1 = num1 + 1; 
}
	
	
	
	system("pause");
	
}
