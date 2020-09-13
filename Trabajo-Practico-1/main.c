#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Operations.h"


void Menu();

    int factorialNum1;
    int factorialNum2;
    int flag1;
    int flag2;
    int flag3;
    int opcion;
    float num1;
    float num2;
    float suma;
    float resta;
    float multiplicacion;
    float division;



int main()
{

    flag1 = 0;
    flag2 = 0;
    flag3 = 0;

    do {

        Menu();
        printf("  - Escoja una opcion: ");
        scanf("%i", &opcion);
        fflush(stdin);
        Sleep(500);


                switch(opcion){

                    case 1:
                        system("cls");
                        Menu();
                        printf("  Aguarde...");
                        Sleep(2000);
                        system("cls");
                        Menu();
                        printf("  - Ingrese el primer numero: ");
                        scanf("%f", &num1);
                        fflush(stdin);
                        Sleep(1000);
                        system("cls");
                        flag1 = 1;
                        break;


                    case 2:
                        system("cls");
                        Menu();
                        printf("  Aguarde...");
                        Sleep(2000);
                        system("cls");
                        Menu();
                        printf("  - Ingrese el segundo numero: ");
                        scanf("%f", &num2);
                        fflush(stdin);
                        Sleep(1000);
                        system("cls");
                        flag2 = 1;
                        break;


                    case 3:
                        system("cls");
                        Menu();
                        if (flag1 == 1 && flag2 == 1){

                            printf("  Aguarde...");
                            Sleep(2000);
                            system("cls");
                            Menu();

                            printf("  Se estan realizando los calculos. Aguarde por favor...");
                            suma = CalcularSuma(num1, num2);
                            resta = CalcularResta(num1, num2);
                            multiplicacion = CalcularMultiplicacion(num1, num2);
                            division = CalcularDivision(num1, num2);
                            factorialNum1 = CalcularFactorial(num1);
                            factorialNum2 = CalcularFactorial(num2);
                            Sleep(3000);
                            system("cls");
                            Menu();

                            printf("  Sirvase un cafe, esto esta tardando mas de lo esperado...");
                            Sleep(5000);
                            system("cls");
                            Menu();

                            printf("  Se calcularon sus operaciones! Ingrese la opcion 4 para ver los resultados.");
                            flag3 = 1;

                        } else {

                            printf("  Ingrese por favor ambos numeros para poder realizar los calculos.");

                        }

                        Sleep(5000);
                        system("cls");
                        break;


                    case 4:
                        if (flag3 == 1){

                            printf("\n  Aguarde...");
                            Sleep(1000);
                            system("cls");
                            Menu();

                            printf("\n  - Se estan imprimiendo sus resultados...\n");
                            Sleep(500);

                            printf("\n  La suma de estos numeros es: %.2f", suma);
                            Sleep(500);

                            printf("\n  La resta de estos numeros es: %.2f", resta);
                            Sleep(500);

                            if (num2 == 0){

                                printf("\n  No se puede dividir entre 0");

                            } else {

                                printf("\n  La division de estos numeros es: %.2f", division);

                                }
                            Sleep(500);

                            printf("\n  La multiplicacion de estos numeros es: %.2f", multiplicacion);
                            Sleep(500);

                            if (num1 < 0){

                                printf("\n  No se puede obtener el factorial de un numero negativo");

                            } else {

                                printf("\n  El factorial de %.2f es: %i", num1, factorialNum1);

                                }

                            if (num2 < 0){

                                printf("\n  No se puede obtener el factorial de un numero negativo");

                            } else {

                                printf("\n  El factorial de %.2f es: %i \n", num2, factorialNum2);

                                }

                            Sleep(7000);

                        } else {

                            printf("\n  Debe calcular los resultados antes de mostrarlos.");
                            Sleep(2000);

                        }

                        system("cls");
                        break;

                    case 5:
                        printf("\n  Que tenga un buen dia!\n");
                        Sleep(3000);
                        break;

                    default:
                        printf("  Esa opcion no es valida. Por favor ingrese una opcion valida.");
                        Sleep(3000);
                        system("cls");
                        break;
                }


    } while (opcion != 5);


    return 0;
}

void Menu(){

        printf("\n         -| TRABAJO PRACTICO I |-\n\n\n");
        printf("  1) Ingresar 1er operando:...........[%.2f]\n  2) Ingresar 2do operando:...........[%.2f]\n  3) Calcular todas las operaciones:\n\n\n", num1, num2);
        printf("  a) Suma......................[%.2f + %.2f]\n  b) Resta.....................[%.2f - %.2f]\n", num1, num2, num1, num2);
        printf("  c) Division..................[%.2f / %.2f]\n  d) Multiplicacion............[%.2f * %.2f]\n  e) Factorial.......................[%.2f! %.2f!]\n", num1, num2, num1, num2, num1, num2);
        printf("\n\n  4) Informar resultados.               \n");
        printf("  5) Salir.                             \n\n");

}
