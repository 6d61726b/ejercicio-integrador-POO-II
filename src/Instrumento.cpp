#include "Instrumento.h"
#include <string>
#include <iomanip>

Instrumento::Instrumento(std::string id, double precio, TipoInstrumento tipo)
{
	this->id = id;
	this->precio = precio;
	this->tipo = tipo;
}

TipoInstrumento Instrumento::getTipo() const
{
	return this->tipo;
}

std::string Instrumento::toString()
{
	std::string ti = "";

	if (this->tipo == TipoInstrumento::PERCUSION)
		ti = "PERCUSION";
	else if (this->tipo == TipoInstrumento::VIENTO)
		ti = "VIENTO";
	else if (this->tipo == TipoInstrumento::CUERDA)
		ti = "CUERDA";

    std::ostringstream redondeado;
    redondeado << std::fixed << std::setprecision(2) << this->precio;

	return "Instrumento{ id: " + this->id + ", precio: " + redondeado.str() + ", tipo: " + ti + "}";
}