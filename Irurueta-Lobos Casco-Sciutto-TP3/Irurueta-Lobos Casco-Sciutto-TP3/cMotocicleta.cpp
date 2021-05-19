#include "cMotocicleta.h"
string cMotocicleta::pasosMantenimiento = pasosMantenimientoMOTOCICLETA;

cMotocicleta::cMotocicleta(unsigned int numeroPatente, unsigned int color, unsigned int numeroChasis,
	unsigned int numeroPoliza, cFecha* ultimoMantenimiento, float precioAlquilerXDia,
	const unsigned int capacidadPasajeros, int cantElementosSeguridad)
	:cVehiculo(numeroPatente, color, numeroChasis, numeroPoliza, ultimoMantenimiento,
		precioAlquilerXDia, capacidadPasajeros, cantElementosSeguridad)
{
}
cMotocicleta::~cMotocicleta()
{
}

string cMotocicleta::getTipoVehiculo()
{
	return "motocicleta";
}

float cMotocicleta::calcularTarifa(int cantDias)
{
	return (precioAlquilerXDia*cantDias + precioBase);
}

int cMotocicleta::getCantidadElementosSeguridad()
{
	return cantElementosSeguridad;
}
