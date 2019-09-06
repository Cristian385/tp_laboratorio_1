#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"


float sumar(float numeroUno, float numeroDos) //hace la suma
{
    float suma;

    suma = numeroUno + numeroDos;
    return suma;
}


float restar (float numeroUno, float numeroDos)// hace la resta
{
    float resta;

    resta = numeroUno - numeroDos;
    return resta;
}


float multiplicar (float numeroUno, float numeroDos)//hace la multiplicacion
{
    float multiplicacion;

    multiplicacion = numeroUno * numeroDos;
    return multiplicacion;
}

float dividir (float numeroUno, float numeroDos)//hace la division
{
    float division;
    division = numeroUno / numeroDos;
    return division;
}

float factorial(float numeroUno)//hace el factorial
{
    int contador;
    float resultado = 1;

    for (contador = 1; contador <= numeroUno; contador++)//multiplica el numero ingresado por todos sus anteriores
    {
        resultado = resultado * contador;
    }

    return resultado;
}

