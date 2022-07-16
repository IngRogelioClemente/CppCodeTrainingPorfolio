//PROGRAMA QUE CALCULE EL IMC DE UNA PERSONA

#include<stdio.h>
#include <cstdlib>

main(){
	
	float peso, altura, IMC;
	
	
	printf("Introduzca peso en kg: ");
	scanf("%f", &peso);

	printf("introduzca altura en metros: ");
	scanf("%f", &altura);
	
	IMC = peso / (altura*altura);
	
	printf("Su IMC es %f", IMC);

	system("PAUSE");
	return 0;
}
