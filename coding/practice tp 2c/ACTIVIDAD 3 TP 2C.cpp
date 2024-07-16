#include <stdio.h>

int main() {
    float importe;
    printf("ingrese el importe: ");
    scanf("%f",&importe);
     if (importe > 2500.00) {
        printf("El pago debe realizarse con cheque.\n");
    } else {
        printf("El pago debe realizarse con efectivo.\n");
    }
}
