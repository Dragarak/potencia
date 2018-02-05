// González Cisneros Samantha Gpo.:B

// Tarea 12

#include<stdio.h>

#include<math.h>



int main(){

   
   float valor;

   float potencia;



   printf ("Inserte el valor a elevar \n");

   scanf ("%f", &valor);

   
   
   printf ("Insere el valor de la potencia\n");

   scanf ("%f", &potencia);


   float resultado = pow (valor, potencia);


   printf ("%f a la %f potencia = %f", valor, potencia, resultado);

}