#include <stdio.h>

int main() {
    int duracionMinutos;
    float costo;

    
    printf("Ingrese la duracion de la llamada en minutos: ");
    scanf("%d", &duracionMinutos);

    if (duracionMinutos <= 3) {
        costo = 120.0;
    } else {
        costo = 120.0 + (duracionMinutos - 3) * 65.0;
    }

    printf("El costo de la llamada es: $%.2f\n", costo);

    return 0;
}
