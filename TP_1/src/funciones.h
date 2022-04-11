/*
 * funciones.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Painwheel
 */
void ingresarKilometros();
void ingresarPreciosDeVuelos();
int calcular();

int obtenerKilometros();
float obtenerAerolineasPrecioTotalVuelo();
float obtenerAerolineasPrecioPorKm();
float obtenerLatamPrecioTotalVuelo();
float obtenerLatamPrecioPorKm();
float obtenerDiferenciaPrecio();

float calcularTarjeta(float precioTotalVuelo, float ratio);
float dividir(float dividendo, float divisor);
float calcularDiferencia(float precioTotalAerolineas, float precioTotalLatam);

int mostrarResultados();
void asignarKilometros(int valor);
void asignarAerolineasPrecioTotalVuelo(float valor);
void asignarLatamPrecioTotalVuelo(float valor);

#define RATIO_TARJETA_DEBITO -10
#define RATIO_TARJETA_CREDITO 25
#define PRECIO_BITCOIN 4606954.55

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

#endif /* FUNCIONES_H_ */
