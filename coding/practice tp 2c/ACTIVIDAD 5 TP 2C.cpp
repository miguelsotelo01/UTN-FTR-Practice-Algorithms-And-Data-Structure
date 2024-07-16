#include <stdio.h>

int main() {
    float radio, perimetro, superficie;
    float constantepi = 3.14159;
  	printf("ingrese el radio del circulo: ");
    scanf("%f", &radio);

    
    perimetro = 2 * constantepi * radio;
    superficie = constantepi * radio * radio;

    printf("Perimetro del circulo: %.2f\n", perimetro);
    printf("Superficie del circulo: %.2f\n", superficie);
}
