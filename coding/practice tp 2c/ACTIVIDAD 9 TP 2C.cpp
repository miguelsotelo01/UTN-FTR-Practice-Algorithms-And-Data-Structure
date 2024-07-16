#include <stdio.h>

int main (){
	int tiempoSeg, horas,minutos,segundos;
	
	printf("ingrese el los segundos: ");
	scanf("%d",&tiempoSeg);
	
	horas = tiempoSeg / 3600;
	minutos = (tiempoSeg % 3600) / 60;
	segundos = tiempoSeg % 60;
	
	 printf("\nTiempo ingresado: %d segundos\n", tiempoSeg);
    printf("Convertido a: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
}