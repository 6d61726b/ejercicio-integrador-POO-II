#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H

#include "TipoInstrumento.h"
#include <iostream>
#include <string>

class Instrumento
{
	std::string id;
	double precio;
	TipoInstrumento tipo;

public:
	Instrumento(std::string id, double precio, TipoInstrumento tipo);
	~Instrumento() = default;
	TipoInstrumento getTipo() const;
	std::string toString();
};

#endif