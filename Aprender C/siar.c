#include<stdio.h>
#include<stdlib.h>

typedef struct siar
{
    int localizador;
    float altitud,latitud;
    int subindice;
}siar;


float maximo(float vector[], int size);
float minimo (float vector[], int size);


int main(void)
{
    FILE *pf;
    char token;
    int contador_lineas=0;
    int i;
    pf = fopen("SIAR.csv","r");
    if(pf == NULL)
    {
        printf("error al abrir el fichero\n");
    }
    else
    {
        while(fscanf(pf,"%c",&token)!= EOF)
        {
            if(token == '\n')
            {
                contador_lineas++;
            }
        }
    }
    siar datos[323];
    fseek(pf,0,SEEK_SET);
    for(i=0;i<contador_lineas;i++)
    {
        fscanf(pf,"%i,%f,%f,%i",&datos[i].localizador, &datos[i].altitud, &datos[i].localizador, &datos[i].subindice);
    }

    for ( i = 0; i < contador_lineas; i++)
    {
        printf("%i %.2f %.2f %i\n", datos[i].localizador, datos[i].altitud, datos[i].latitud, datos[i].subindice);
    }
    
    






    return 0;
}


float maximo(float vector[], int size)
{
    int i;
    float maximo = 0;
    for(i=0;i<size;i++)
    {
        if(vector[i]>maximo)
        {
            maximo = vector[i];
        }
    }

    return maximo;
}
float minimo (float vector[], int size)
{
    int i;
    float minimo=0;
    for(i=0;i<size;i++){
        if(vector[i]<minimo){
            minimo = vector[i];
        }

    }

    return minimo;
}
