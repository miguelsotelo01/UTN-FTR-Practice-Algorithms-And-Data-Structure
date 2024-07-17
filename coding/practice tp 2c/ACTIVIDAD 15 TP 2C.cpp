#include <stdio.h>

int main() {
    float valorDeclarado, impuestoAduana, flete = 200.0, seguro, costoFinal;

    printf("Ingrese el valor declarado del bien en U$S: ");
    scanf("%f", &valorDeclarado);

    if (valorDeclarado <= 1500.0) {
        impuestoAduana = valorDeclarado * 0.15;
    } else {
        impuestoAduana = valorDeclarado * 0.20;
    }

    seguro = valorDeclarado * 0.02;

    costoFinal = valorDeclarado + impuestoAduana + flete + seguro;

    printf("Valor declarado del bien: U$S %.2f\n", valorDeclarado);
    printf("Impuesto de Aduana: U$S %.2f\n", impuestoAduana);
    printf("Flete: U$S %.2f\n", flete);
    printf("Seguro: U$S %.2f\n", seguro);
    printf("Costo final de importacion: U$S %.2f\n", costoFinal);

    return 0;
}
