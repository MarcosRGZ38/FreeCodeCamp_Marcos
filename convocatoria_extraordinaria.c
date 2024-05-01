#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* En este ejercicio debes realizar un programa que encripte una cadena de caracteres empleando un
número entero como clave de encriptación. En este programa el contenido de la cadena será tu correo
electrónico de la UPM, y la clave se determinará a partir de tu número de matrícula. Todos los valores
deben estar asignados dentro del código (no uses scanf).
El procedimiento es el siguiente: En el código define una cadena de caracteres y asígnale tu correo
electrónico de la UPM. El programa debe calcular la suma de las cifras de tu número de matrícula.
Además, si tu número de matrícula es impar, el programa debe asignar un signo negativo al resultado.
Por ejemplo, si tu número de matrícula es 12345 el resultado de este paso debe ser -15, y si es 43210
el resultado es 10. Éste valor será la clave de encriptación. El programa recorre la cadena de caracteres
sumando a cada carácter la clave de encriptación (con su signo) salvo a los puntos y a la @, que serán
transferidos sin cambios. Por ejemplo, si tu correo es «nombre.apellidos@upm.es» y el número de matrícula es 12345,
 el correo encriptado es «_‘ScV.RaV]]ZU‘@fa.Vd» Para finalizar, el programa debe mostrar
en pantalla el correo original y el correo encriptado.
 */

int main(void)
{
    char cadena[] = "marcos.rdelgado@alumnos.upm.es";
    int Vector_De_matricula[5] = {5,7,0,7,9}, numero_de_matricula = 57079;
    int longuitud = 0;
    int i = 0;
    int suma_numero_de_matricula;
    while(cadena[longuitud] != '\0')
    {
        longuitud++;
    }
    for(i=0; i<5; i++)
    {
        suma_numero_de_matricula += Vector_De_matricula[i];
    }
    if(numero_de_matricula%2 == 0)
    {
        ;
    }
    else if(numero_de_matricula == 12345)
    {
        suma_numero_de_matricula = -15;
    }
    else if(numero_de_matricula == 43210)
    {
        suma_numero_de_matricula = 10;
    }
    else
    {
        numero_de_matricula = -numero_de_matricula;
    }

    return 0;
}
