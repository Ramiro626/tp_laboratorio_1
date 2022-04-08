/*
 ============================================================================
 Name        : TP_1.c
 Author      : Ramiro Sanchez
 Version     : 1
 Copyright   : DIV D
 Description : Trabajo Practico 1
 ============================================================================
 */
//Librerias, declaracion e inicializacion de variables
#include <stdio.h>
#include <stdlib.h>
#include "calculo.h"

int kilometros = 0;
int opcion = 0;
float aerolineas = 0;
float latam = 0;
float debito1 = 0;
float debito2 = 0;
float credito1 = 0;
float credito2 = 0;
float btc1 = 0;
float btc2 = 0;
float unitario1 = 0;
float unitario2 = 0;
float diff = 0;

/*
//Declaracion de funciones
void calculo(void); //calculos matematicos
void mostrar(void); //muestra los calculos
*/

//Inicio funcion
int main(void) { //funcion principal
	setbuf(stdout, NULL); //set
	//Menu
	do
	{
		printf(  "\n1) 1 para ingresar los kilometros \n"
				 "2) 2 para ingresar precio de aerolineas o latam \n"
				 "3) 3 para calcular las operaciones \n"
				 "4) 4 para informar los resultados \n"
				 "5) 5 para carga forzada de datos \n"
				 "6) 6 para salir \n");

		printf("\nIngrese una opcion: ");
		scanf("%d", &opcion);
		//Sub-Menu
		switch(opcion)
		{
		case 1:
			printf("\nIngrese los kilometros ");
			scanf("%d", &kilometros);
			break;
		case 2:
			printf("\nIngrese el precio de Aerolineas ");
			scanf("%f", &aerolineas);
			printf("\nIngrese el precio de Latam ");
			scanf("%f", &latam);
			break;
		case 3:
			calculo(); //llamado funcion
			break;
		case 4:
			mostrar();
			break;
		case 5:
			kilometros = 7090;
			aerolineas = 162965;
			latam = 159339;
			calculo();
			mostrar();
			break;
		case 6:
			opcion = 6;
			break;
		default:
			printf("\nError, Ingrese una opcion valida: ");
			scanf("%d", &opcion);
			break;

		}

	}
	while(opcion!=6);

	printf("\nFin de programa.");

	return 0;
}

/*
void calculo(void) //funcion secundaria
{
	debito1 = aerolineas * 0.9;
	debito2 = latam * 0.9;
	credito1 = aerolineas * 1.25;
	credito2 = latam * 1.25;
	btc1 = aerolineas / 4606954.55;
	btc2 = latam / 4606954.55;
	unitario1 = aerolineas / kilometros;
	unitario2 = latam / kilometros;
	if (aerolineas>latam)
	{
		diff = aerolineas-latam;
	}
	else if (aerolineas<latam)
	{
		diff = latam-aerolineas;
	}
	else
	{
		diff = 0;
	}
}
*/
/*
void mostrar(void)
{
	printf("\nKMs Ingresados: %d km\n", kilometros);
	printf("\nPrecio Aerolineas: $%f", aerolineas);
	printf("\na) Precio con tarjeta de debito: $%f", debito1);
	printf("\nb) Precio con tarjeta de credito: $%f", credito1);
	printf("\nc) Precio pagando con bitcoin: %f BTC", btc1);
	printf("\nd) Precio unitario: $%f\n", unitario1);
	printf("\nPrecio Latam: $%f", latam);
	printf("\na) Precio con tarjeta de debito: $%f", debito2);
	printf("\nb) Precio con tarjeta de credito: $%f", credito2);
	printf("\nc) Precio pagando con bitcoin: %f BTC", btc2);
	printf("\nd) Precio unitario: $%f\n", unitario2);
	printf("\nDiferencia de precio: $%f\n", diff);
}
*/
