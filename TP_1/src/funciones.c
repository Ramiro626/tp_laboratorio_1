#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "funciones.h"

int kilometros;
int calculado;

float aerolineasPrecioTotalVuelo;
float aerolineasPrecioTarjetaDebito;
float aerolineasPrecioTarjetaCredito;
float aerolineasPrecioBitcoin;
float aerolineasPrecioPorKm;

float latamPrecioTotalVuelo;
float latamPrecioTarjetaDebito;
float latamPrecioTarjetaCredito;
float latamPrecioBitcoin;
float latamPrecioPorKm;

float diferenciaPrecio;

int obtenerKilometros() {
	return kilometros;
}

float obtenerAerolineasPrecioTotalVuelo() {
	return aerolineasPrecioTotalVuelo;
}

float obtenerAerolineasPrecioPorKm() {
	return aerolineasPrecioPorKm;
}

float obtenerLatamPrecioTotalVuelo() {
	return latamPrecioTotalVuelo;
}

float obtenerLatamPrecioPorKm() {
	return latamPrecioPorKm;
}

float obtenerDiferenciaPrecio() {
	return diferenciaPrecio;
}

void ingresarKilometros() {
	calculado = 0;
	int valido;
	do {
		printf("\nIngrese los kilometros ");
		valido = scanf("%d", &kilometros);
		if (valido == 0 || kilometros <= 0) {
			printf("\nERROR! Debe ingresar un numero valido.\n");
			fflush(stdin);
		}
	} while (valido == 0 || kilometros <= 0);
}

void ingresarPreciosDeVuelos() {
	calculado = 0;
	int valido;
	do {
		printf("\nIngrese el precio de Aerolineas ");
		valido = scanf("%f", &aerolineasPrecioTotalVuelo);
		if (valido == 0 || aerolineasPrecioTotalVuelo <= 0) {
			printf("\nERROR! Debe ingresar un numero valido.\n");
			fflush(stdin);
		}
	} while (valido == 0 || aerolineasPrecioTotalVuelo <= 0);

	do {
		printf("\nIngrese el precio de Latam ");
		valido = scanf("%f", &latamPrecioTotalVuelo);
		if (valido == 0 || latamPrecioTotalVuelo <= 0) {
			printf("\nERROR! Debe ingresar un numero valido.\n");
			fflush(stdin);
		}
	} while (valido == 0 || latamPrecioTotalVuelo <= 0);
}

float calcularTarjeta(float precioTotalVuelo, float ratio) {
	return precioTotalVuelo + precioTotalVuelo * ratio / 100;
}

float dividir(float dividendo, float divisor) {
	return dividendo / divisor;
}

float calcularDiferencia(float precioTotalAerolineas, float precioTotalLatam) {
	float resultado = precioTotalAerolineas - precioTotalLatam;

	if (resultado < 0) {
		return resultado * -1;
	}

	return resultado;
}

int calcular() {
	if (kilometros == 0) {
		printf("ERROR! Faltan ingresar los kilometros del vuelo\n");
	} else if (aerolineasPrecioTotalVuelo == 0) {
		printf("ERROR! Faltan ingresar el precio del vuelo para AEROLINEAS\n");
	} else if (latamPrecioTotalVuelo == 0) {
		printf("ERROR! Faltan ingresar el precio del vuelo para LATAM\n");
	} else {
		aerolineasPrecioTarjetaDebito = calcularTarjeta(aerolineasPrecioTotalVuelo, RATIO_TARJETA_DEBITO);
		aerolineasPrecioTarjetaCredito = calcularTarjeta(aerolineasPrecioTotalVuelo, RATIO_TARJETA_CREDITO);
		aerolineasPrecioBitcoin = dividir(aerolineasPrecioTotalVuelo, PRECIO_BITCOIN);
		aerolineasPrecioPorKm = dividir(aerolineasPrecioTotalVuelo, kilometros);

		latamPrecioTarjetaDebito = calcularTarjeta(latamPrecioTotalVuelo,
		RATIO_TARJETA_DEBITO);
		latamPrecioTarjetaCredito = calcularTarjeta(latamPrecioTotalVuelo,
		RATIO_TARJETA_CREDITO);
		latamPrecioBitcoin = dividir(latamPrecioTotalVuelo, PRECIO_BITCOIN);
		latamPrecioPorKm = dividir(latamPrecioTotalVuelo, kilometros);

		diferenciaPrecio = calcularDiferencia(aerolineasPrecioTotalVuelo, latamPrecioTotalVuelo);

		calculado = 1;
	}
	return calculado;
}

int mostrarResultados() {
	if (calculado == 0) {
		printf("ERROR! Falta calcular los precios\n");
		return 0;
	} else {
		printf("\nKMs Ingresados: %d km\n", kilometros);
		printf("\nPrecio Aerolineas: $%.2f\n", aerolineasPrecioTotalVuelo);
		printf("a) Precio con tarjeta de debito: $ %.2f\n", aerolineasPrecioTarjetaDebito);
		printf("b) Precio con tarjeta de credito: $ %.2f\n", aerolineasPrecioTarjetaCredito);
		printf("c) Precio pagando con bitcoin: %.2f BTC\n", aerolineasPrecioBitcoin);
		printf("d) Mostrar precio unitario: $ %.2f\n", aerolineasPrecioPorKm);

		printf("\nPrecio Latam: $%.2f\n", latamPrecioTotalVuelo);
		printf("a) Precio con tarjeta de debito: $ %.2f\n", latamPrecioTarjetaDebito);
		printf("b) Precio con tarjeta de credito: $ %.2f\n", latamPrecioTarjetaCredito);
		printf("c) Precio pagando con bitcoin: %.2f BTC\n", latamPrecioBitcoin);
		printf("d) Mostrar precio unitario: $ %.2f\n", latamPrecioPorKm);

		printf("\nLa diferencia de precio es: $%.2f\n", diferenciaPrecio);
	}
	return 1;
}

void asignarKilometros(int valor) {
	calculado = 0;
	kilometros = valor;
}

void asignarAerolineasPrecioTotalVuelo(float valor) {
	calculado = 0;
	aerolineasPrecioTotalVuelo = valor;
}

void asignarLatamPrecioTotalVuelo(float valor) {
	calculado = 0;
	latamPrecioTotalVuelo = valor;
}
