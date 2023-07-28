#include "Sucursal.h"

Sucursal::Sucursal(std::string nombre) : nombre(nombre)
{
}

void Sucursal::agregarInstrumento(const Instrumento &instrumento)
{
	this->instrumentos.push_back(instrumento);
}

void Sucursal::listarInstrumentos()
{
	auto it = this->instrumentos.begin();

	while (it != this->instrumentos.end())
	{
		std::cout << (*it).toString() << std::endl;
		++it;
	}
}

std::vector<Instrumento> Sucursal::instrumentoPorTipo(TipoInstrumento tipo)
{
	std::vector<Instrumento> nuevaListaInstrumentos;

	for (auto instrumento : instrumentos)
	{
		if (instrumento.getTipo() == tipo)
			nuevaListaInstrumentos.push_back(instrumento);
	}

	return nuevaListaInstrumentos;
}

std::string Sucursal::getNombre()
{
	return this->nombre;
}