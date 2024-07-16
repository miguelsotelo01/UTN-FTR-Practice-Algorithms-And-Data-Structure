#include <stdio.h>

main (){
	int Horas,sueldo;
	
	printf("ingrese la cantidad de horas mensuales: ");
	scanf("%d",&Horas);
	
	
	if(Horas <= 180){
		sueldo = Horas * 560;
		printf (" su sueldo es: %d\n",sueldo);
	} else if (Horas >= 180){
		sueldo = (180 * 560) + (Horas * (560 +200));
		printf (" su sueldo es: %d\n",sueldo);
	}
	
	 return 0;
}