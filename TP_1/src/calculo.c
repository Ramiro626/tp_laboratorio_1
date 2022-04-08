/*
 * calculo.c
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
