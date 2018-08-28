#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/*Implementamos la funcion menu.-*/


void menuGeneral()
{
system("cls");

int opc;
float num1;
float num2;

printf("\nIngresar 1er Operando (A): ");
scanf("%f", &num1);

printf("\nIngressar 2do Operando (B): ");
scanf("%f", &num2);



do{
system("cls");

printf("\n======================================");
printf("\nSeleccione la Operacion a Realizar");
printf("\n======================================\n");
printf("\nEl valor de A es: %.2f", num1);
printf("\nEl valor de B es: %.2f", num2);
printf("\n\n======================================\n");
printf("\n1. Calcular la Suma (A+B)");
printf("\n2. Calcular la Resta (A-B)");
printf("\n3. Calcular la Division (A/B)");
printf("\n4. Calcular la Multiplicacion (A*B)");
printf("\n5. Calcular el Factorial (A!) (B!)");
printf("\n6. Reiniciar");
printf("\n7. Salir");
printf("\n\n======================================");
printf("\nOpcion: ");
scanf("%d", &opc);
printf("\n======================================");


switch(opc)
{

case 1: sumar(num1, num2); break;
case 2: restar(num1, num2); break;
case 3: dividir(num1, num2); break;
case 4: multiplicar(num1, num2); break;
case 5: factorial(num1, num2); break;
case 6: menuGeneral(); break;
}
}while(opc != 7);

}
/*generamos la funcion sumar.-*/

int sumar(float a, float b)
{
system("cls");

float suma;


suma = a + b;

printf("======================================");
printf("\nEl resultado de A+B es: %.2f", suma);
printf("\n======================================\n");

system("pause");
system("cls");

return suma;

//getchar();

}


/*//generamos la funcion restar.-*/

int restar(float a, float b)
{
system("cls");

float resta=0;

resta = a - b;

printf("======================================");
printf("\nEl resultado de A-B es: %.2f", resta);
printf("\n======================================\n");

system("pause");
system("cls");

return resta;

}

/*//generamos la funcion dividir.-*/

int dividir(float a, float b){
system("cls");

float div=0;

div = a / b;

if(b == 0)
{
printf("======================================");
printf("\n\nLa division no es valida!! \n\nNo se puede dividir entre cero");
printf("\n======================================\n");
}

else
{
printf("=========================================");
printf("\nEl resultado de A/B es: %.2f", div);
printf("\n=========================================\n");
}
system("pause");
system("cls");

return div;



}

/*generamos la funcion multiplicar.-*/

int multiplicar(float a, float b)
{
system("cls");

float mult=0;

mult = a * b;

printf("============================================");
printf("\nEl resultado de A*B es: %.2f", mult);
printf("\n============================================\n");

system("pause");
system("cls");

return mult;

}

//Definimos la funcion de factoreo

int factorial(float a, float b)
{
system("cls");

    int i;
    float valor1=a;
    float valor2=b;
    float factorial = 1;
    float facto = 1;

    //printf("Ingrese el valor a factorear: ");
    //scanf("%d", &valor);

    for(i = valor1; i >= 1; i--)
    {
        factorial = factorial  * i;
    }
    printf("======================================");
    printf("\nEl factorial de A es: %.2f\n", factorial);

    for(i=valor2; i>=1; i--)
    {
        facto = facto * i;
    }
    printf("======================================");
    printf("\nEl factorial de B es: %.2f\n", facto);
    printf("======================================\n");

system("pause");
system("cls");

    return 0;
}
