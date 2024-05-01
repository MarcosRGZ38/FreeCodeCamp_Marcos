#include <stdio.h>
#include <stdlib.h>

typedef struct DIVISA
{
    float yuan;
    float wones;
    float SingDolar;
}DIVISA;

typedef struct DCliente
{
    char nya[20];
    int ID;
    float saldo;
    int flag;
    DIVISA sdivisa;
}DCliente;

void IniClientes(DCliente clientes[], int n);
int VIPCliente(DCliente clientes[], int n);

int main(void)
{
    DCliente clientes[2];
    int vip,nclients;

    IniClientes(clientes,2);
    vip = VIPCliente(clientes,2);
    printf("\n");
    printf("ID Cliente VIP: %d", vip);

    return 0;
}

void IniClientes(DCliente clientes[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nNombre del Cliente: ");
        scanf("[^\n]s", clientes[i].nya);
        printf("\nID Cliente: ");
        scanf("%i", clientes[i].ID);
        printf("\nDIVISAS\n");
        printf("\nSaldo en Yuanes: ");
        scanf("%f", &clientes[i].sdivisa.yuan);
        printf("\nSaldo en Wones: ");
        scanf("%f", &clientes[i].sdivisa.wones);
        printf("\n");
        scanf("\nSaldo en Dolares de Singapur: ");+
        scanf("%f", &clientes[i].sdivisa.SingDolar);
        clientes[i].saldo = clientes[i].sdivisa.wones*0.007+clientes[i].sdivisa.SingDolar*0.69;
        if(clientes[i].sdivisa.yuan <= 0.0 || clientes[i].sdivisa.wones <= 0.0 || clientes[i].sdivisa.SingDolar <= 0.0)
        {
            clientes[i].flag = 0;
        }
        else
        {
            clientes[i].flag = 1;
        }
    }

}

int VIPCliente(DCliente clientes[], int n)
{
    int i, IDvip = -1;
    float saldovip = 0.0;

    for(i=0;i<n;i++)
    {
        if(clientes[i].saldo > saldovip && clientes[i].flag == 1)
        {
            saldovip = clientes[i].saldo;
            IDvip = i;
        }
    }


    return IDvip;
}
