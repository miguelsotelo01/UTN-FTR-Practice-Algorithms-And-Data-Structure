#include <stdio.h>

int main() {
    float salario,salarioDescuento,porcentaje = 1.5, porcentaje2 = 2.0;
    

	printf("ingrese el salario basico: ");
    scanf("%f", &salario);

    if(salario <= 50000){
    	printf("no paga impuestos");
	}else if(salario <= 80000){
		salarioDescuento = salario * (1 - (porcentaje / 100));
		printf("Su salario es: %.2f\n", salarioDescuento);
	}else if(salario > 80000){
		salarioDescuento = salario * (1 - (porcentaje2 / 100));
		printf("Su salario es: %.2f\n", salarioDescuento);
	}
    return 0;
}
