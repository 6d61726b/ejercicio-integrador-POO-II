#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H

#include "TipoInstrumento.h"
#include <string>

class Instrumento
{
	std::string id;
	double precio;
	TipoInstrumento tipo;

public:
	Instrumento(std::string id, double precio, TipoInstrumento tipo);
	~Instrumento() = default;
	std::string toString();
};

#endif