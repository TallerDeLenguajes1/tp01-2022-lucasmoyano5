
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>

int devolverCuadardo(int num);
void devolverCuadardoConVoid(int num);
void invertir(int a,int b);
void orden(int a,int b);
void ingresarNumeros(int numA,int numB); 

int main(){
	
	       int numero,resultado,numeroA,numeroB;
	     
           printf("Ingrese el numero que desea elevar al cuadrado: ");
           scanf("%d", &numero);
            
           resultado=devolverCuadardo(numero);
           printf("El numero (%d) elevado al cuadrado es: %d",numero,resultado);
           devolverCuadardoConVoid(numero);
           printf("\n\n");
           
           printf("Direccion en que se guarda la variable ingresada: %d", &numero);
           printf("\nContenido de la variable ingresada: %d", numero);
      
           printf("\n\n    Funcion Invertir");           
           invertir(7,45);
      
           printf("\n\n    Funcion Orden");          
           orden(80,14);
             
           printf("\n\nIngrese el numero (a): ");
           scanf("%d", &numeroA);
           printf("Ingrese el numero (b): ");
           scanf("%d", &numeroB);
           
           ingresarNumeros(numeroA,numeroB); 


  printf("\n\n");
  return 0;
}


int devolverCuadardo(int num){
	return pow(num, 2);
}
void devolverCuadardoConVoid(int num){
     int r;
     r=pow(num, 2);  
     printf("\nEl numero (%d) elevado al cuadrado usando void es: %d",num,r);
}

void invertir(int a,int b){
     
     int aux;
      
     printf("\n\nEl numero (a) vale %d y el numero (b) vale %d",a,b);
     
     aux = a; 
     a=b; 
     b=aux;  
     
     printf("\nInvertidos los numeros el numero (a) vale %d y el (b) vale %d",a,b);

}

void orden(int a,int b){
     
     int aux;
      
     printf("\n\nEl numero (a) vale %d y el numero (b) vale %d",a,b);
     
     if(a==b)
     {
	   printf("\nEn este caso (a) y (b) son iguales, en (a) esta el valor %d y en (b) esta el valor %d",a,b);
	 }
     else
     {
	       if(a<b)
           {
	          printf("\nEn (a) esta el valor mas chico %d y en (b) esta el valor mas grande %d",a,b);
	       }
	       else
	       {
		      aux = a; 
              a=b; 
              b=aux;  
              printf("\nAhora en (a) esta el valor mas chico %d y en (b) esta el valor mas grande %d",a,b);
	       }
	 }
     
}


void ingresarNumeros(int numA,int numB){

           invertir(numA,numB);
           orden(numA,numB);
}
