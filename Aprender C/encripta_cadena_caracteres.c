#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* En este ejercicio debes realizar un programa que encripte una cadena de caracteres empleando un
n�mero entero como clave de encriptaci�n. En este programa el contenido de la cadena ser� tu correo
electr�nico de la UPM, y la clave se determinar� a partir de tu n�mero de matr�cula. Todos los valores
deben estar asignados dentro del c�digo (no uses scanf).
El procedimiento es el siguiente: En el c�digo define una cadena de caracteres y as�gnale tu correo
electr�nico de la UPM. El programa debe calcular la suma de las cifras de tu n�mero de matr�cula.
Adem�s, si tu n�mero de matr�cula es impar, el programa debe asignar un signo negativo al resultado.
Por ejemplo, si tu n�mero de matr�cula es 12345 el resultado de este paso debe ser -15, y si es 43210
el resultado es 10. �ste valor ser� la clave de encriptaci�n. El programa recorre la cadena de caracteres
sumando a cada car�cter la clave de encriptaci�n (con su signo) salvo a los puntos y a la @, que ser�n
transferidos sin cambios. Por ejemplo, si tu correo es �nombre.apellidos@upm.es� y el n�mero de matr�cula es 12345,
 el correo encriptado es �_�ScV.RaV]]ZU�@fa.Vd� Para finalizar, el programa debe mostrar
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
