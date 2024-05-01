#include<stdio.h>
#define num 5

typedef struct caracteristicas
{
    char simbolo[3];
    int numero_atomico;
    float masa_atomica;
    char nombre[10];

}caracteristicas;


int main(void)
{
    int respuesta_na;
    caracteristicas alcalinos[num] ={{"Li",3,6.94,"Litio"},{"Na",11,22.98,"Sodio"},{"K",19,39.09,"Potasio"},{"Rb",37,85.46,"Rubidio"},{"Cs",55,132.9,"Cesio"}};
    int i,contador=0;
    for(i=0;i<num;i++)
    {
        printf("elemento: %s\t",alcalinos[i].simbolo);
        printf("numero atomico: ");
        scanf("%i",&respuesta_na);
        while(respuesta_na != alcalinos[i].numero_atomico && contador < 5)
        {
            printf("incorrecto\n");
            printf("vuelve a intentarlo: ");
            scanf("%i",&respuesta_na);
            contador++;
        }
        printf("correcto\n");
    }

    printf("\n##SOLUCIONES##\n\n");
    for(i=0;i<num;i++)
    {
        printf("elemento: %s\t",alcalinos[i].simbolo);
        printf("%s\n", alcalinos[i].nombre);
        printf("masa atomica: %f ",alcalinos[i].masa_atomica);
        printf("numero atomico: %i\n",alcalinos[i].numero_atomico);
    }

    return 0;
}


