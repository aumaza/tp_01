#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Funcion menuGeneral
 *
 * \param presenta las opciones
 * \param de los calculos a realizar (suma, resta, multiplicacion, division, factorial).-
 * \return Devuelve los calculos completos de cada operacion.-
 *
 */


int menuGeneral()
{
system("cls");

int opc;
int ch;
int ok;
float num1=0;
float num2=0;
int suma=0;
int resta=0;
int multi=0;


do{
system("cls");

printf("\n======================================");
printf("\nSeleccione la Operacion a Realizar");
printf("\n======================================\n");
printf("\nEl valor de A es: %.2f", num1);
printf("\nEl valor de B es: %.2f", num2);
printf("\n\n======================================\n");
printf("\n1. Ingrese 1er operando (A=x)");
printf("\n2. Ingrese 2do operando (B=y)");
printf("\n\n======================================\n");
printf("\n3. Calcular todas las operaciones\n");
printf("\na) Calcular la suma (A+B)");
printf("\nb) Calcular la resta (A-b)");
printf("\nc) Calcular la division (A/B)");
printf("\nd) Calcular la Multiplicacion (A*B)");
printf("\ne) Calcular el Factorial (A!)");
printf("\n\n======================================\n");
printf("\n4. Informar resultados");
printf("\n\n======================================\n");
printf("\n5. Reiniciar");
printf("\n\n======================================\n");
printf("\n6. Salir");
printf("\n\n======================================");

do
    {
      printf("\nOpcion: ");
      fflush(stdout);
      if ((ok = scanf("%d", &opc)) == EOF)
         return EXIT_FAILURE;


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
   }while(!ok);
printf("\n======================================\n");


switch(opc)
{

case 1: do
        {
            int ok;
            int ch;

        printf("\nIngresar 1er Operando (A): ");
        fflush(stdout);

        if ((ok = scanf("%f", &num1)) == EOF)
            {

                return 1;

            }


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
}while(!ok); break;

case 2: do
        {
            int ok;
            int ch;

        printf("\nIngresar 2do Operando (B): ");
        fflush(stdout);

        if ((ok = scanf("%f", &num2)) == EOF)
        {
            return 1;
        }


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
}while(!ok); break;

case 3: suma = num1+num2;
        printf("\nsuma: %d", suma);
        resta = num1-num2;
        printf("\nresta: %d", resta);
        multi = num1*num2;
        printf("\nmultiplicacion: %d\n", multi); break;

case 4: sumar(num1,num2); //break;
        restar(num1,num2); //break;
        dividir(num1, num2); //break;
        multiplicar(num1, num2); //break;
        factorial(num1, num2); break;
case 5: menuGeneral(); break;
}
}while(opc != 6);

return 0;
}

/** \brief Funcion Sumar
 *
 * \param recibe como parametro el operando A=x
 * \param recibe como parametro el operando B=y
 * \return devuelve el valor calculado d ela suma entre ambos operandos.-
 *
 */

int sumar(float a, float b)
{
system("cls");

float suma;

suma = a + b;

printf("======================================");
printf("\nEl resultado de A+B es: %.2f", suma);
printf("\n======================================\n");

/*system("pause");
system("cls");*/

return suma;

//getchar();

}


/** \brief Funcion Restar
 *
 * \param recibe como parametro el operando A=x
 * \param recibe como parametro el operando B=y
 * \return devuelve el valor calculado en la resta.-
 *
 */


int restar(float a, float b)
{
//system("cls");

float resta=0;

resta = a - b;

printf("======================================");
printf("\nEl resultado de A-B es: %.2f", resta);
printf("\n======================================\n");

/*system("pause");
system("cls");*/

return resta;

}

/** \brief Funcion dividir
 *
 * \param recibe como parametro el operando A=x
 * \param recibe como parametro el operando B=y
 * \param en caso de que el parametro B=y sea cero (0) devolvera "division invalida"
 * \return devuelve el valor del calculo de la division en caso satisfactorio
 *
 */


int dividir(float a, float b){
//system("cls");

float div=0;

div = a / b;

if(b == 0)
{
printf("======================================");
printf("\n\nLA DIVISION NO ES VALIDA!! \n\nNO SE PUEDE DIVIDIR ENTRE CERO");
printf("\n\n======================================\n");
}

else
{
printf("======================================");
printf("\nEl resultado de A/B es: %.2f", div);
printf("\n======================================\n");
}
/*system("pause");
system("cls");*/

return div;



}

/** \brief Funcion multiplicar
 *
 * \param recibe como parametro el operando A=x
 * \param recime como parametro el operando B=y
 * \return devuelve el valor del calculo de la multiplicacion entre ambos operandos
 *
 */


int multiplicar(float a, float b)
{
//system("cls");

float mult=0;


mult = a * b;
printf("======================================");
printf("\nEl resultado de A*B es: %.2f", mult);
printf("\n======================================\n");

/*system("pause");
system("cls");*/


return mult;

}

/** \brief Funcion factorial
 *
 * \param recibe como parametro el operando A=x
 * \param recibe como parametro el operando B=y
 * \return devuelve el valor del calculo del factorial del operando A=x y el valor del calculo del factorial del operando B=y
 *
 */


int factorial(float a, float b)
{
//system("cls");

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
    printf("======================================\n\n");

system("pause");
system("cls");

    return 0;
}


