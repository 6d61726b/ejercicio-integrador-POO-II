#ifndef FABRICA_H
#define FABRICA_H

#include "Sucursal.h"
#include <vector>

class Fabrica
{
	std::vector<Sucursal> sucursales;

public:
	Fabrica();
	~Fabrica() = default;
	void agregarSucursal(const Sucursal &sucursal);
	void listarInstrumentos();
};

#endif