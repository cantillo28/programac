#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>


main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float ang1, ang2, ang3, soma;
	
	
	
printf("Triãngulos \n");


printf("Digite o primeiro ângulos: \n");
scanf("%f", &ang1);

printf("Digite o segundo ângulos: \n");
scanf("%f", &ang2);

printf("Digite o terceiro ângulos: \n");
scanf("%f", &ang3);

soma = ang1+ang2+ang3; 

if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)){
	printf("Seu seu triângulo é um triãngulo retângulo. \n");
} else{
		if ((ang1 < 90) && (ang2 < 90) && (ang3 < 90)){
		printf("Seu seu triângulo é um triãngulo ocutângulo. \n");
		}
		if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
		printf("Seu seu triângulo é um triãngulo obtuso. \n");
		}
 	}












system("Pause");	
	
}
