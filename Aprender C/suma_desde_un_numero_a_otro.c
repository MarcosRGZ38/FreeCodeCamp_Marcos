#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Sumatorio(int A, int B);

int main(int argc, char *argv[]){ 
    int A,B;
    printf("Esto es un programa que calcula terminos de la sucesion sumatorio desde B hasta A de los n terminos\n");
    printf("Introduzca A y B: ");
    scanf("%i %i", &A, &B); //coge un valor tipo int en la terminal y ponlo en la direccion de memoria de la variable A
    while ((A<=0) || (B<A))
    {
        printf("introduzca A y B: ");
        scanf("%i %i", &A, &B);
    }
    
    printf("el sumatorio es: %i", Sumatorio(A,B));


    
    return 0; // if execution was correct 
}

int Sumatorio(int A, int B){
    int numero_terminos = B-A;
    int i;
    int suma = A;
    for(i=0;i<=numero_terminos;i++){
        suma = suma + i;
    }
    
    return suma;
}



