#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>


main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float ang1, ang2, ang3, soma;
	
	
	
printf("Tri�ngulos \n");


printf("Digite o primeiro �ngulos: \n");
scanf("%f", &ang1);

printf("Digite o segundo �ngulos: \n");
scanf("%f", &ang2);

printf("Digite o terceiro �ngulos: \n");
scanf("%f", &ang3);

soma = ang1+ang2+ang3; 

if ((ang1 == 90) || (ang2 == 90) || (ang3 == 90)){
	printf("Seu seu tri�ngulo � um tri�ngulo ret�ngulo. \n");
} else{
		if ((ang1 < 90) && (ang2 < 90) && (ang3 < 90)){
		printf("Seu seu tri�ngulo � um tri�ngulo ocut�ngulo. \n");
		}
		if ((ang1 > 90) || (ang2 > 90) || (ang3 > 90)){
		printf("Seu seu tri�ngulo � um tri�ngulo obtuso. \n");
		}
 	}












system("Pause");	
	
}
