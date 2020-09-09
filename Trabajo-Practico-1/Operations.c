#include <stdio.h>
#include "Operations.h"


int CalcularFactorial(int numero){

    int resultado;
        if(numero == 0){
            resultado = 1;
        } else{
            resultado = numero * CalcularFactorial(numero - 1);
        }

    return resultado;
}


float CalcularSuma(float num1, float num2){

    float suma;
    suma = num1 + num2;
    return suma;
}


float CalcularResta(float num1, float num2){

    float resta;
    resta = num1 - num2;
    return resta;
}


float CalcularMultiplicacion(float num1, float num2){

    float multiplicacion;
    multiplicacion = num1 * num2;
    return multiplicacion;
}


float CalcularDivision(float num1, float num2){

    float division;
    division = num1 / num2;
    return division;
}
