#include <stdio.h>

int main() {
    float nota1_asignatura1, nota2_asignatura1;
    float nota1_asignatura2, nota2_asignatura2;
    float notaTrabajoFinal;
    float promedio_asignatura1, promedio_asignatura2;
    float notaFinal;

    printf("Ingrese la primera nota de la primera asignatura: ");
    scanf("%f", &nota1_asignatura1);
    printf("Ingrese la segunda nota de la primera asignatura: ");
    scanf("%f", &nota2_asignatura1);

    printf("Ingrese la primera nota de la segunda asignatura: ");
    scanf("%f", &nota1_asignatura2);
    printf("Ingrese la segunda nota de la segunda asignatura: ");
    scanf("%f", &nota2_asignatura2);

    printf("Ingrese la nota del Trabajo Final Integrador: ");
    scanf("%f", &notaTrabajoFinal);

    promedio_asignatura1 = (nota1_asignatura1 + nota2_asignatura1) / 2;
    promedio_asignatura2 = (nota1_asignatura2 + nota2_asignatura2) / 2;

    notaFinal = (promedio_asignatura1 * 0.20) + (promedio_asignatura2 * 0.30) + (notaTrabajoFinal * 0.50);

    // Mostrar la nota final
    printf("La nota final es: %.2f\n", notaFinal);

    return 0;
}
