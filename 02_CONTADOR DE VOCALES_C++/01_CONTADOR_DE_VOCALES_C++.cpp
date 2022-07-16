//Programa  que solicite un texto y calcule n de vocales

#include <stdio.h>
#include <string.h>
#include <cstdlib>

main(){
	
        system("color 70");
	char *p, Texto[500], n=0, vocales=0;
	
	printf("Escribe el texto");
	gets(Texto);
	n = strlen (Texto);
	
	for (p=Texto; *p; ++p)
	  switch (*p){
	  	case 'A':
	  	case 'E':
	  	case 'I':
	  	case 'O':
	  	case 'U':
	  	case 'a':
	  	case 'e':
	  	case 'i':
	  	case 'o':
	  	case 'u': vocales++;
	  	        break;
	}
	
	printf("\n[%s] tiene %d vocales\n", Texto, vocales);
	system("PAUSE");
	return 0;
}
