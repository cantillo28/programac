#include<stdio.h>
#include<stdlib.h>
#include<locale.h>




main(void){
	
	
	setlocale(LC_ALL, "portuguese");
	
	
	int i;
	
	for (i = 0; i<=100; i = i+1){
		printf("%d \n", i);
	}
	system("PAUSE");
}
