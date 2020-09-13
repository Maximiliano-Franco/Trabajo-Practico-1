#include <stdio.h>
#include "Operations.h"


int CalcularFactorial(int numero1){

    int resultado;
        if(numero1 == 0){
            resultado = 1;
        } else{
            resultado = numero1 * CalcularFactorial(numero1 - 1);
        }

    return resultado;
}


float CalcularSuma(float numero1, float numero2){

    float resultado;
    resultado = numero1 + numero2;
    return resultado;
}


float CalcularResta(float num1, float num2){

    float resultado;
    resultado = num1 - num2;
    return resultado;
}


float CalcularMultiplicacion(float num1, float num2){

    float resultado;
    resultado = num1 * num2;
    return resultado;
}


float CalcularDivision(float num1, float num2){

    float resultado;
    resultado = num1 / num2;
    return resultado;
}
