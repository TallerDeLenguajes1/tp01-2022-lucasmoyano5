#include <stdio.h>
#include <stdlib.h>

int a = 55;
int *puntero;

int main()
{
    puntero = &a;
    
    printf("Hola Mundo");
    
    printf("\nEl contenido del puntero: %d o %d",*puntero, a);
      
    printf("\nLa direccion de memoria almacenada por el puntero: %d",puntero);
     
    printf("\nLa direccion de memoria de la variable: %d", &a);
     
    printf("\nLa direccion de memoria del puntero: %d", &puntero);
    
    printf("\nEspacio de memoria utilizado por el puntero: %d", sizeof(&a));
 
    printf("\nEl tamanio de memoria utilizado por el puntero: %d", sizeof(&puntero));
     
    return 0;
}
 
