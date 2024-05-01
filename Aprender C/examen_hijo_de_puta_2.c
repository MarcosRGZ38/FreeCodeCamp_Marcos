#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define LENGTH 20

int main(void)
{
    char token;
    int i=0;
    int m=0;
    int contador=0;
    int numero_de_matriculas = 0;
    char cadena[100];
    do
    {
        scanf("%c", &token);
        cadena[i] = token;
        i++;
        contador++;
    }while(token != '\n');
    for(m=0;m<contador;m++)
    {
        if(isdigit(cadena[m])&&isdigit(cadena[m+1])&&isdigit(cadena[m+2])&&isdigit(cadena[m+3])&&isalpha(cadena[m+4])&&isalpha(cadena[m+5])&&isalpha(cadena[m+6]))
        {
            numero_de_matriculas++;
        }

    }
    printf("Matriculas detectadas: %i", numero_de_matriculas);

    return 0;
}
