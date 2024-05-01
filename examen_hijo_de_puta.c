#include <stdio.h>
#include <stdlib.h>
#define NUM 5

void serie(int Numero_inicial, float terminos[], float *pvarianza);
float potencia(float base, int exponente);
float media(int Nterminos, float terminos[]);
float varianza(int Nterminos, float media, float terminos[]);

int main(void)
{
    int Numero_inicial;
    scanf("%i", &Numero_inicial);
    float terminos[] = {0,0,0,0,0};
    float var;
    serie(Numero_inicial, terminos, &var);

    return 0;
}

void serie(int Numero_inicial ,float terminos[], float *pvarianza)
{
    int i=0;
    float vector_pa_la_varianza[NUM];
    terminos[0] = (float)Numero_inicial*-1.0;
    printf("%f", terminos[0]);
    printf(" ");
    for(i=1; i<NUM; i++)
    {
        terminos[i] += (float)potencia(-1.0,i)/(i*(i+1.0));
        vector_pa_la_varianza[i] = terminos[i];
        printf("%f ", terminos[i]);
    }
    float avg;
    avg = media(NUM, vector_pa_la_varianza);
    float var;
    var = varianza(NUM, avg, vector_pa_la_varianza);
    printf("varianza:  %f", var);

}

float potencia(float base, int exponente)
{
    int i=0;
    for(i=0;i<=exponente;i++)
    {
        base *= base;
    }

    return base;
}

float media(int Nterminos, float terminos[])
{
    float suma=0;
    float avg=0;
    int i=0;
    for(i=0;i<Nterminos;i++)
    {
       suma += terminos[i];
    }
    avg = suma/Nterminos;

    return avg;
}

float varianza(int Nterminos, float media, float terminos[])
{
    int i;
    float suma=0;
    float var;
    for(i=0;i<Nterminos;i++)
    {
        terminos[i] -= media;
    }
    for(i=0;i<Nterminos;i++)
    {
        terminos[i] = potencia(terminos[i], 2);
    }
    for(i=0;i<Nterminos;i++)
    {
        suma += terminos[i];
    }
    var = suma/Nterminos;

    return var;
}


