/*
 * mostrar.c
 *
 *  Created on: 7 abr. 2022
 *      Author: Painwheel
 */
#include <stdio.h>
#include <stdlib.h>
extern int kilometros;
extern float aerolineas;
extern float latam;
extern float debito1;
extern float debito2;
extern float credito1;
extern float credito2;
extern float btc1;
extern float btc2;
extern float unitario1;
extern float unitario2;
extern float diff;

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
