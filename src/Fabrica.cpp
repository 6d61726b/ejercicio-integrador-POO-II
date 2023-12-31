#include "Fabrica.h"

Fabrica::Fabrica()
{	
}

void Fabrica::agregarSucursal(const Sucursal &sucursal)
{
	this->sucursales.push_back(sucursal);
}

void Fabrica::listarInstrumentos()
{
	auto it = this->sucursales.begin();

	while (it != this->sucursales.end())
	{
		std::cout << (*it).getNombre() << std::endl;
		(*it).listarInstrumentos();
		++it;
	}
}

std::vector<Instrumento> Fabrica::instrumentoPorTipo(TipoInstrumento tipo)
{
	std::vector<Instrumento> nuevaListaInstrumentos;

    for (auto& sucursal : sucursales)
    {
        auto aux = sucursal.instrumentoPorTipo(tipo);
        nuevaListaInstrumentos.insert(nuevaListaInstrumentos.end(), aux.begin(), aux.end());
    }

	return nuevaListaInstrumentos;
}