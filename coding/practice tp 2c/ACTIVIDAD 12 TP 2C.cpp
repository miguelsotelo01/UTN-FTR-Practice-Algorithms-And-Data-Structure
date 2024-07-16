#include <stdio.h>

int main() {
    float salarioBasico;
    float adicionalAntiguedad, adicionalFamiliar = 12500.00;
    float descuentoJubilatorio, descuentoSeguroVida = 1500.00;
    float salarioNeto;

    printf("Ingrese el salario básico: ");
    scanf("%f", &salarioBasico);

    adicionalAntiguedad = salarioBasico * 0.10;

    descuentoJubilatorio = salarioBasico * 0.14;

   
    salarioNeto = salarioBasico + adicionalAntiguedad + adicionalFamiliar - descuentoJubilatorio - descuentoSeguroVida;

    printf("\nDetalles del Sueldo:\n");
    printf("Salario Básico: %.2f\n", salarioBasico);
    printf("Adicional por Antigüedad (10%%): %.2f\n", adicionalAntiguedad);
    printf("Adicional por Salario Familiar: %.2f\n", adicionalFamiliar);
    printf("Descuento por Jubilación (14%%): %.2f\n", descuentoJubilatorio);
    printf("Descuento por Seguro de Vida: %.2f\n", descuentoSeguroVida);

    printf("Salario Neto a Percibir: %.2f\n", salarioNeto);

    return 0;
}
