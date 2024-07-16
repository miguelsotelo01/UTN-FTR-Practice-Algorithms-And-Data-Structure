#include <stdio.h>

main (){
	int N, MULT;
	printf("ingrese el numero: ");
	scanf("%d",&N);
	
	if( N > 0){
	 MULT =	N * 5;
	 printf("el resultado es: %d\n", MULT);
	}else {
		printf("el numero es negativo");
	}
}