//PROGRAMA QUE CALCULE ALGUN DATO DE X SITUACION CREDITICIA

#include<stdio.h>
#include <cstdlib>

main(){
	
	//  M = Monto  C = Capital  I = Interes  i = tasa de interes  t = tiempo //
	
	float M, C, I, i, t, resultado;
	char Dato;
	
	printf(" Ingrese dato a buscar: ");
    scanf("%C", &Dato );
    
    
    switch (Dato) {
     	
        case 'M':
    printf("Introduzca el capital: ");
	scanf("%f", &C);
	printf("Introduzca la tasa de interes en decimal: ");
	scanf("%f", &i);
	printf("Introduzca el tiempo en años: ");
	scanf("%f", &t);
            resultado = C*(1+(i*t));
            break;
            
            
        case 'C':
    printf("Introduzca el monto: ");
	scanf("%f", &M);
	printf("Introduzca la tasa de interes en decimal: ");
	scanf("%f", &i);
	printf("Introduzca el tiempo en años: ");
	scanf("%f", &t);
            resultado = M / (1+(i*t));
            break;
            
            
        case 'I':
    printf("Introduzca el capital: ");
	scanf("%f", &C);
	printf("Introduzca la tasa de interes en decimal: ");
	scanf("%f", &i);
	printf("Introduzca el tiempo en años: ");
	scanf("%f", &t);
            resultado = (C*i*t);
            break;
            
            
        case 'i':
    printf("Introduzca el capital: ");
	scanf("%f", &C);
	printf("Introduzca el interes: ");
	scanf("%f", &I);
	printf("Introduzca el tiempo en años: ");
	scanf("%f", &t);
            resultado = I / (C*t);
            break;
            
            
        case 't':
    printf("Introduzca el capital: ");
	scanf("%f", &C);
	printf("Introduzca el interes: ");
	scanf("%f", &I);
	printf("Introduzca la tasa de interes en decimal: ");
	scanf("%f", &i);
            resultado = I / (C*i);
            break;
            
    }
	
	printf("El dato buscado es %f\n", resultado);
	
	system("PAUSE");
	return 0;
}
