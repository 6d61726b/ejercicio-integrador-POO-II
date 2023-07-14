#include "Sucursal.h"

Sucursal::Sucursal(std::string nombre) : nombre(nombre)
{
}

void Sucursal::agregarInstrumento(Instrumento instrumento)
{
	this->instrumentos.push_back(instrumento);
}

void Sucursal::listarInstrumentos()
{
	std::vector<Instrumento>::iterator it;
	it = this->instrumentos.begin();

	while (it != this->instrumentos.end())
	{
		std::cout << (*it).toString() << std::endl;
		++it;
	}
}

std::string Sucursal::getNombre()
{
	return this->nombre;
}