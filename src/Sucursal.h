#ifndef SUCURSAL_H
#define SUCURSAL_H

#include "Instrumento.h"
#include <iostream>
#include <string>
#include <vector>

class Sucursal
{
	std::string nombre;
	std::vector<Instrumento> instrumentos;

public:
	Sucursal(std::string nombre);
	~Sucursal() = default;
	void agregarInstrumento(const Instrumento &instrumento);
	void listarInstrumentos();
	std::vector<Instrumento> instrumentoPorTipo(TipoInstrumento tipo);
	std::string getNombre();
};

#endif