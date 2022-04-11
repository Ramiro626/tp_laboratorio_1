/*
 ============================================================================
 Name        : TP_1.c
 Author      : Ramiro Sanchez
 Version     : 2
 Copyright   : DIV D
 Description : Trabajo Practico 1
 ============================================================================
 */
//Librerias, declaracion e inicializacion de variables
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "funciones.h" //Contiene las funciones

//Inicio funcion
int main(void) { //funcion principal
	int opcionMenuSeleccionada;

	setbuf(stdout, NULL); //set
	//Menu
	do {
		printf("\n1) Ingresar kilometros: (km=%d) \n"
				"2) Ingresar precio de vuelos: (Aerolineas=$%.2f, Latam=$%.2f)\n"
				"3) Calcular todos los costos\n"
				"4) Informar Resultados\n"
				"5) Carga forzada de datos\n"
				"6) Salir\n", obtenerKilometros(), obtenerAerolineasPrecioTotalVuelo(), obtenerLatamPrecioTotalVuelo());

		printf("\nIngrese una opcion: ");
		scanf(" %d", &opcionMenuSeleccionada);
		//Sub-Menu
		switch (opcionMenuSeleccionada) {
		case 1:
			ingresarKilometros();
			break;
		case 2:
			ingresarPreciosDeVuelos();
			break;
		case 3:
			if (calcular() == 1) {
				printf("\nValor vuelo aerolineas precio por kilometro $%.2f\n", obtenerAerolineasPrecioPorKm());
				printf("Valor vuelo latam precio por kilometro $%.2f\n", obtenerLatamPrecioPorKm());
				printf("La diferencia de precio es: $%.2f\n", obtenerDiferenciaPrecio());
			}
			break;
		case 4:
			if (mostrarResultados() == 1) {
				opcionMenuSeleccionada = 6;
			}
			break;
		case 5:
			asignarKilometros(7090);
			asignarAerolineasPrecioTotalVuelo(162965);
			asignarLatamPrecioTotalVuelo(159339);
			calcular();
			mostrarResultados();
			opcionMenuSeleccionada = 6;
			break;
		case 6:
			break;
		default:
			printf("\nError, Ingrese una opcion valida\n");
			fflush(stdin);
			break;

		}

	} while (opcionMenuSeleccionada != 6);

	return 0;
}
