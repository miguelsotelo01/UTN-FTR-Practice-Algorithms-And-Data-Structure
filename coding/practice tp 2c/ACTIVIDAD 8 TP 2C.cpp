#include <stdio.h>

main (){
	int A,B,C,MAYOR;
	
	printf("ingrese la primera nota: ");
	scanf("%d",&A);
	
	printf("ingrese la segunda nota: ");
	scanf("%d",&B);
	
	printf("ingrese la tercera nota: ");
	scanf("%d",&C);
	
	if(A>B && A>C){
		MAYOR = A;
		printf("la nota mayor es:  %d\n",A);
	}else if( B>A && B > C){
			MAYOR = B;
		printf("la nota mayor es:  %d\n",B);
	}else {
			MAYOR = C;
		printf("la nota mayor es:  %d\n",C);
	}
	 return 0;
}