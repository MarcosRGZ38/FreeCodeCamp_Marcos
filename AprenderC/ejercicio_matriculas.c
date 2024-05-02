#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define long_max 1024

int main(void)
{
    char linea_De_texto[long_max];
    char token;
    int cuentra_letras = 0;
    int i = 0;
    int numero_de_lineas=0;
    printf("esto es un programa que es capaz de analizar hasta 5 lineas de texto en busca de matriculas\n");
    printf("introduzca el texto: \n");
    while(numero_de_lineas <= 4)
    {
        scanf("%c", &token);
        if(token == '\n')
        {
            numero_de_lineas += 1;
        }
        cuentra_letras++;
        linea_De_texto[i] = token;
        i++;
    }
    printf("matriculas: \n");
    for(i=0; i<= cuentra_letras; i++)
    {
        if(isdigit(linea_De_texto[i])&&isdigit(linea_De_texto[i+1])&&isdigit(linea_De_texto[i+2])&&isdigit(linea_De_texto[i+3])&&isalpha(linea_De_texto[i+4])&&isalpha(linea_De_texto[i+5])&&isalpha(linea_De_texto[i+6]))
        {
            printf("%c%c%c%c%c%c%c\n", linea_De_texto[i], linea_De_texto[i+1], linea_De_texto[i+2], linea_De_texto[i+3], linea_De_texto[i+4], linea_De_texto[i+5], linea_De_texto[i+6]);
        }
    }
    return 0;
}
