#include "Fabrica.h"

Fabrica::Fabrica()
{	
}

void Fabrica::agregarSucursal(Sucursal sucursal)
{
	this->sucursales.push_back(sucursal);
}

void Fabrica::listarInstrumentos()
{
	std::vector<Sucursal>::iterator it;
	it = this->sucursales.begin();

	while (it != this->sucursales.end())
	{
		std::cout << (*it).getNombre() << std::endl;
		(*it).listarInstrumentos();
		++it;
	}
}