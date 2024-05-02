#include<stdio.h>
#include<stdlib.h>
#define num 5

typedef struct elemento
{
    char simbolo[3];
    char nombre[30];
    int NumeroAtomico;
    float MasaAtomica;
}elemento;

int main(void)
{
    int i,contador=0;
    int numero_pregunta;
    elemento alcalinos[num] = {
    {"Li","Litio",3,6.94},
    {"Na","Sodio",11,22.98},
    {"K","Potasio",19,39.09},
    {"Rb","Rubidio",37,85.46},
    {"Cs","Cesio",55,132.91}
    };
    for(i=0;i<num;i++)
    {
        label2:
        printf("%s\n", alcalinos[i].simbolo);
        scanf("%i", &numero_pregunta);
        label:
        if(numero_pregunta == alcalinos[i].NumeroAtomico)
        {
            printf("has escrito el valor correcto\n");
        }
        else
        {
            printf("valor incorrecto\n ");
            contador++;
            scanf("%i", &numero_pregunta);
            goto label;
            if(contador >= 5)
            {
            }
        }
    }


    return 0;
}
