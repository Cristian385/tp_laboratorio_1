#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"

int main()
{
    printf("\nAgrandar el tamaño de la consola para ver bien los resultados, gracias.\n\n");
    system("pause");
    system("cls");

    char opcion;
    float numeroUno = 0;
    float numeroDos = 0;


    float suma;
    float resta;
    float multiplicacion;
    float division;
    float factorialUno;
    float factorialDos;

    do
    {
        //Le damos la bienvenida al programa
        printf("¡Bienvenido a mi calculadora! \n \n");
        //Menu de la calculadora
        printf("Presione 1 para ingresar el primer numero. \n");
        printf("Presione 2 para ingresar el segundo numero. \n");
        printf("Presione 3 para realizar las operaciones correspondientes. \n");
        printf("Presione 4 para mostrar los resultados. \n");
        printf("Presione 5 para salir. \n");


        printf   ("______________________ ");
        printf("\n|  _________________  | ");
        printf("\n| | %f        | | ", numeroUno);
        printf("\n| | %f        | | ", numeroDos);
        printf("\n|  ___ ___ ___   ___  | ");
        printf("\n| | 7 | 8 | 9 | | + | | ");
        printf("\n| |___|___|___| |___| | ");
        printf("\n| | 4 | 5 | 6 | | - | | ");
        printf("\n| |___|___|___| |___| | ");
        printf("\n| | 1 | 2 | 3 | | x | | ");
        printf("\n| |___|___|___| |___| | ");
        printf("\n| | . | 0 | = | | / | | ");
        printf("\n| |___|___|___| |___| | ");
        printf("\n|_____________________| \n");


        printf("Ingrese una opcion: ");
        fflush(stdin);
        scanf("%c", &opcion);

        //validacion del menu
        while (opcion <= '0' || opcion >= '6')
        {
            printf("Opcion incorrecta,");

            printf("Ingrese una opcion: ");
            fflush(stdin);
            scanf("%c", &opcion);
        }

        switch(opcion)
        {
        //El case 1 sirve para pedir el primer numero
        case '1':
        {
            printf("Ingrese el primer numero: ");
            fflush(stdin);
            scanf("%f", &numeroUno);

            break;
        }
        //El case 2 sirve para ingresar el segundo numero
        case '2':
        {
            printf("Ingrese el segundo numero: ");
            fflush(stdin);
            scanf("%f", &numeroDos);

            break;
        }
        //En el case 3 hacemos todos las operaciones segun los 2 numeros ingresados
        case '3':
        {
            suma = sumar(numeroUno, numeroDos);

            resta = restar(numeroUno, numeroDos);

            division = dividir(numeroUno, numeroDos);

            multiplicacion = multiplicar(numeroUno, numeroDos);

            factorialUno = factorial(numeroUno);

            factorialDos = factorial(numeroDos);


            printf("\n Ya se realizaron las operaciones, fiera \n");

            break;
        }
        //muestra por pantalla los resultados de las operaciones.
        case '4':
        {

            printf  (" _____________________            _____________________            _____________________            _____________________");
            printf("\n|  _________________  |          |  _________________  |          |  _________________  |          |  _________________  |");
            printf("\n| | La suma es  %.2f  |          | |La multiplicacion| |          | |La division da   | |          | |1º factorial: %.2f |", suma, factorialUno);
            printf("\n| | La resta es %.2f  |          | | da:  %.2f       | |          | |    %.2f         | |          | |2º factorial: %.2f |", resta, multiplicacion, division, factorialDos);
            printf("\n|  ___ ___ ___   ___  |          |  ___ ___ ___   ___  |          |  ___ ___ ___   ___  |          |  ___ ___ ___   ___  |");
            printf("\n| | 7 | 8 | 9 | | + | |          | | 7 | 8 | 9 | | + | |          | | 7 | 8 | 9 | | + | |          | | 7 | 8 | 9 | | + | |");
            printf("\n| |___|___|___| |___| |          | |___|___|___| |___| |          | |___|___|___| |___| |          | |___|___|___| |___| |");
            printf("\n| | 4 | 5 | 6 | | - | |          | | 4 | 5 | 6 | | - | |          | | 4 | 5 | 6 | | - | |          | | 4 | 5 | 6 | | - | |");
            printf("\n| |___|___|___| |___| |          | |___|___|___| |___| |          | |___|___|___| |___| |          | |___|___|___| |___| |");
            printf("\n| | 1 | 2 | 3 | | x | |          | | 1 | 2 | 3 | | x | |          | | 1 | 2 | 3 | | x | |          | | 1 | 2 | 3 | | x | |");
            printf("\n| |___|___|___| |___| |          | |___|___|___| |___| |          | |___|___|___| |___| |          | |___|___|___| |___| |");
            printf("\n| | . | 0 | = | | / | |          | | . | 0 | = | | / | |          | | . | 0 | = | | / | |          | | . | 0 | = | | / | |");
            printf("\n| |___|___|___| |___| |          | |___|___|___| |___| |          | |___|___|___| |___| |          | |___|___|___| |___| |");
            printf("\n|_____________________|          |_____________________|          |_____________________|          |_____________________|\n");

            numeroUno = 0;
            numeroDos = 0;
            suma= 0;
            resta= 0;
            division= 0;
            multiplicacion= 0;
            factorialUno=0;
            factorialDos=0;

            break;

        }
        //Para salir.
        case '5':
        {
            printf("\n Nos re vimos. \n");

            return 0;

            break;
        }
        }

        //Creamos una pausa para mostrar los mensajes
        system("pause");
        //Limpia la pantalla
        system("cls");

    }while (opcion !=5);

}
//fin de la calculadora :D
