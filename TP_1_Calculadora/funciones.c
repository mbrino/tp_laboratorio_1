#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <conio.h>
#include <ctype.h>

/**
* @brief suma dos numeros A+B
* @param A primer valor de la suma
* @param B segundo valor de la  suma
* @return valor de la suma
**/
float sum(float A, float B)
{
    return (float)A+B;
}

/**
* @brief resta dos numeros A-B
* @param A primer valor de la resta
* @param B segundo valor de la  resta
* @return valor de la resta
**/
float resta(float A, float B)
{
    return (float)A-B;
}

/**
* @brief divide dos numeros A-B
* @param A dividendo
* @param B divisor que no puede ser 0
* @return resultado de la division
**/
float division(float A, float B)
{
    return (float)A/B;
}

/**
* @brief multiplica dos numeros A-B
* @param A primer factor
* @param B segudno factor
* @return resultado de la multiplicacion
**/
float producto(float A, float B)
{
    return(float)A*B;
}

/**
* @brief convierte el valor ingresado a entero y obtiene el factorial
* @param A valor al cual se le realizara el calculo
* @return resultado del factorial
**/
int factorial(float A)
{
    int resultado=(int)A;
    int i;

    if(A==0)
    {
        return 1;
    }else
    {
        for(i=A; i>1; i--)
        {
            resultado=resultado*(i-1);
        }
        return resultado;
    }
}

