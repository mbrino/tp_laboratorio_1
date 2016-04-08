/*******************************************************************
*Programa:Trabajo Practico 1
*
*Objetivo:
    Ingresar dos valores y realizarle operaciones matematicas.
    opcion
*
*Version:0.1 del 07 Abril 2016
*Autor:Matias Brino
*
********************************************************************/



#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float readNumber();
int isNumber(char *number);
void errorOperando();

int main()
{
    char seguir='s';
    int opcion=0;
    float operandoA;
    float operandoB;
    int flagA=0;
    int flagB=0;

    while(seguir=='s')
    {
        system("cls");
        printf("*****************************************\n*                                       *\n");
        if(flagA==0)
        {
            printf("* 1- Ingresar 1er operando (A=?)	*\n");
        }
        else
        {
            printf("* 1- Ingresar 1er operando (A=%.2f)	*\n", operandoA);
        }
        if(flagB==0)
        {
            printf("* 2- Ingresar 2do operando (B=?)	*\n");
        }
        else
        {
            printf("* 2- Ingresar 2do operando (B=%.2f)	*\n", operandoB);
        }

        printf("* 3- Calcular la suma (A+B)		*\n");
        printf("* 4- Calcular la resta (A-B)		*\n");
        printf("* 5- Calcular la division (A/B)		*\n");
        printf("* 6- Calcular la multiplicacion (A*B)	*\n");
        printf("* 7- Calcular el factorial (A!)		*\n");
        printf("* 8- Calcular todas las operaciones  	*\n");
        printf("* 9- Salir			        *\n*                                       *\n");
        printf("*****************************************\n");

        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("ingrese el operando A:");
                operandoA=readNumber();
                flagA=1;
                break;
            case 2:
                printf("ingrese el operando B:");
                operandoB=readNumber();
                flagB=1;
                break;
            case 3:
                if(flagA==1 && flagB==1)
                {
                    printf("La suma entre A y B es: %.2f\n",sum(operandoA,operandoB));
                }else
                {
                    errorOperando();
                }

                system("pause");
                break;
            case 4:
                if(flagA==1 && flagB==1)
                {
                    printf("La resta entre A y B es: %.2f\n",resta(operandoA,operandoB));
                }else
                {
                    errorOperando();
                }

                system("pause");
                break;
            case 5:
                if(flagA==1 && flagB==1)
                {
                    if(operandoB!=0)
                    {
                        printf("La division entre A y B es: %.2f\n",division(operandoA,operandoB));

                    }else
                    {
                        printf("No se puede dividir por 0\n");

                    }
                }else
                {
                    errorOperando();
                }

                system("pause");
                break;
            case 6:
                if(flagA==1 && flagB==1)
                {
                    printf("La multiplicación entre A y B es: %.2f\n", producto(operandoA,operandoB));
                }else
                {
                    errorOperando();
                }

                system("pause");
                break;
            case 7:
                if(flagA==1)
                {
                    printf("El factorial de A es: %d\n", factorial(operandoA));
                }else
                {
                    printf("Debe introducir el operando A para realizar esta operacion\n");
                }

                system("pause");
                break;
            case 8:
                if(flagA==1 && flagB==1)
                {
                    printf("Suma: %.2f\nResta: %.2f\nDivisión: %.2f\nProducto: %.2f\nFactorial: %d\n", sum(operandoA,operandoB),resta(operandoA,operandoB), division(operandoA,operandoB), producto(operandoA,operandoB), factorial(operandoA));
                }else
                {
                    errorOperando();
                }

                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("La opcion ingresada no es valida, vuelva a ingresar un valor\n");
                system("pause");
                break;
        }

    }
    return 0;
}

/**
* @brief toma un valor de ingresado por teclado y lo almacena en una variable
* @return valor ingresado
**/
float readNumber()
{
    //char buffer[sizeof(float)+1];
    float number;

    fflush(stdin);
    scanf("%f",&number);

    return number;
}

/*
* @brief muestra un mensaje de error
*/
void errorOperando()
{
    printf("Debe introducir ambos operandos para realizar esta operacion\n");
}
