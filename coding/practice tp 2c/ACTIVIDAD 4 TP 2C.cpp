#include <stdio.h>

main(){
	int numero1,numero2,numero3,numero4,numero5, suma, promedio;
	printf("Ingrese el numero 1: ");
    scanf("%d", &numero1);
    printf("Ingrese el numero 2: ");
    scanf("%d", &numero2);
    printf("Ingrese el numero 3: ");
    scanf("%d", &numero3);
    printf("Ingrese el numero 4: ");
    scanf("%d", &numero4);
    printf("Ingrese el numero 5: ");
    scanf("%d", &numero5);
    
    suma = numero1 + numero2 + numero3 +numero4 + numero5;
    promedio= suma / 5;
    printf("La suma es: %d y el promedio es: %d\n", suma, promedio);
    
}