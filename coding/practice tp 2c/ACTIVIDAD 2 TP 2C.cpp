#include <stdio.h>

int main() {
    int N;
    
    printf("Ingrese el numero: ");
    scanf("%d", &N);

   if(N < 25){
   	printf("es menor a 25");
   }else{
   	printf("es mayor a 25");
   }

    return 0;
}
