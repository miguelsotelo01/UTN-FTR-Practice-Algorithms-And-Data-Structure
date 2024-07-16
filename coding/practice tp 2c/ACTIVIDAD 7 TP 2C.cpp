#include <stdio.h>

main (){
	int A,B,N;
	
	printf("ingrese el extremo A del intervalo: ");
	scanf("%d",&A);
	
	printf("ingrese el extremo B del intervalo: ");
	scanf("%d",&B);
	
	printf("ingrese el numero para saber si pertenece al intervalo: ");
	scanf("%d",&N);
	
	if( (N >= A && N <= B) || (N >= B && N <= A)){
	 printf("el numero pertenece al intervalo");
	}else {
		printf("el numero no pertenece al intervalo");
	}
}