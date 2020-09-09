#include <stdio.h>
#include <stdlib.h>
#include "Operations.h"


int main()
{
   int opcion;
   float num1;
   float num2;
    do {

        printf(" ________________________________________\n|                                        |\n|           TRABAJO PRACTICO I           |\n|________________________________________|\n|                                        |\n");
        printf("|  1) Ingresar 1er operando:  [A=X]      |\n|  2) Ingresar 2do operando:  [B=Y]      |\n|  3) Calcular todas las operaciones:    |\n");
        printf("\n       a) Suma (A+B)\n       b) Resta (A-B)\n       c) Division (A/B)\n       d) Multiplicacion (A*B)\n       e) Factorial (A!)\n");
        printf("\n 4) Informar resultados. \n 5) Salir. \n\n Escoja una opcion: ");
        scanf("%d", &opcion);


    } while (opcion != 5);
   /* switch(operacionElegida){
            case 1:
                suma = SumarNumeros(num1, num2); //llamada // Parametros actuales -> cambian en cada llamada
                printf("\nLa suma de ambos numeros da como resultado: %d\n", suma);
                break;

            case 2:
                resta = RestarNumeros(num1, num2);
                printf("\nLa resta de ambos numeros da como resultado: %d\n", resta);
                break;

            case 3:
                multiplicacion = MultiplicarNumeros(num1, num2);
                printf("\nLa multiplicacion de ambos numeros da como resultado: %d\n", multiplicacion);
                break;

            case 4:
                division = DividirNumeros(num1, num2);
                printf("\nLa division de ambos numeros da como resultado: %f\n", division);
                break;
            }*/
}

