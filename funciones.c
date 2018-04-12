#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>
/*se define el menu con el cual ingresaremos a las funciones*/

void menu()
{

int opc;

do{

printf("\n1. Sumar");
printf("\n2. Restar");
printf("\n3. Dividir");
printf("\n4. Multiplicar");
printf("\n5. Factorial");
printf("\n6. Salir");
printf("\nOpcion: ");
scanf("%d", &opc);

switch(opc)
{

case 1: sumar();
break;
case 2: restar();
break;
case 3: dividir();
break;
case 4: multiplicar();
break;
case 5: factorial();
break;
}

}while(opc != 6);

}
/*generamos la funcion sumar.-*/

void sumar(){

float num1;
float num2;
float suma=0;

printf("Ingrese un valor: ");
scanf("%f", &num1);
printf("Ingrese otro valor: ");
scanf("%f", &num2);

printf("\nLos Valores ingresados son: %.2f %.2f", num1, num2);

suma = num1 + num2;

printf("\n\nLa suma es: %.2f \n", suma);

}


/*//generamos la funcion restar.-*/

void restar(){

float num1;
float num2;
float resta=0;

printf("Ingrese un valor: ");
scanf("%f", &num1);
printf("Ingrese otro valor: ");
scanf("%f", &num2);

printf("\nLos Valores ingresados son: %.2f %.2f", num1, num2);

resta = num1 - num2;

printf("\n\nLa resta es: %.2f \n", resta);

}

/*//generamos la funcion dividir.-*/

void dividir(){

float num1;
float num2;
float div=0;

printf("Ingrese un valor: ");
scanf("%f", &num1);
printf("Ingrese otro valor: ");
scanf("%f", &num2);

printf("\n\nLos Valores ingresados son: %.2f %.2f", num1, num2);

div = num1 / num2;

if(num1 == 0 || num2 == 0)

{

printf("\n\nLa division no es valida!!");
printf("\n\nReingrese los valores");
printf("\nIngrese un valor: ");
scanf("%f", &num1);
printf("Ingrese otro valor: ");
scanf("%f", &num2);

printf("\n\nLos Valores ingresados son: %.2f %.2f", num1, num2);

}

printf("\n\nLa division es: %.2f \n", div);

}

/*generamos la funcion multiplicar.-*/

void multiplicar(){

float num1;
float num2;
float mult=0;

printf("Ingrese un valor: ");
scanf("%f", &num1);
printf("Ingrese otro valor: ");
scanf("%f", &num2);

printf("\n\nLos Valores ingresados son: %.2f %.2f", num1, num2);

mult = num1 * num2;

printf("\n\nLa multiplicacion es: %.2f \n", mult);

}

//Definimos la funcion de factoreo

int factorial(int numero)
{

    int valor;
    int factorial = 1;

    printf("Ingrese el valor a factorear: ");
    scanf("%d", &valor);

    for(int i = valor; i >= 1; i--)
    {
        factorial = factorial  * i;
    }

    printf("\nEl factorial de %d es: %d\n", valor, factorial);

    return 0;
}
