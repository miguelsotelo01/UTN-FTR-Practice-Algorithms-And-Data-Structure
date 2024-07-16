# include <stdio.h>
main(){
	int A,B,PERIMETRO;
	printf("ingrese la base del rectangulo: ");
	scanf("%d",&B);
	
	printf("ingrese la altura del rectangulo: ");
	scanf("%d",&A);
	
	PERIMETRO = 2 * (B + A);
	printf("el perimetro del rectangulo es: %d\n", PERIMETRO );
}