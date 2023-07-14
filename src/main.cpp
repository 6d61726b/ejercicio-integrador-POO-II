#include <iostream>
#include "Fabrica.h"
#include "Sucursal.h"
#include "Instrumento.h"
#include "TipoInstrumento.h"

static void cargarFabrica(Fabrica &fabrica);

int main()
{
	Fabrica fabrica {};
	
	cargarFabrica(fabrica);
	fabrica.listarInstrumentos();

	return 0;
}

static void cargarFabrica(Fabrica &fabrica)
{
	Sucursal sucursal1 {"Sucursal 1"};
	Sucursal sucursal2 {"Sucursal 2"};

	Instrumento instrumento1 {"ABC123", 12345, TipoInstrumento::CUERDA};
	sucursal1.agregarInstrumento(instrumento1);

	Instrumento instrumento2 {"BCD456", 32164, TipoInstrumento::VIENTO};
	sucursal1.agregarInstrumento(instrumento2);

	Instrumento instrumento3 {"DEF567", 54546, TipoInstrumento::PERCUSION};
	sucursal1.agregarInstrumento(instrumento3);

	Instrumento instrumento4 {"SDK432", 43678, TipoInstrumento::CUERDA};
	sucursal2.agregarInstrumento(instrumento4);

	Instrumento instrumento5 {"TMK124", 65433, TipoInstrumento::VIENTO};
	sucursal2.agregarInstrumento(instrumento5);

	fabrica.agregarSucursal(sucursal1);
	fabrica.agregarSucursal(sucursal2);
}