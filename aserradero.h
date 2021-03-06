#ifndef ASERRADERO_H
#define ASERRADERO_H
#include "edificio.h"

class Aserradero : public Edificio
{
private:

    const int CANTIDADMATERIAL = 0;
    const string MATERIAL = "no brinda";

public:

    Aserradero(string nombre);

    //PRE:
    //POST:Imprime la letra "A"
    void imprimirLetra();

    //PRE:
    //POST:Va a sumar a la lista de materiales lo que el edificio que este custruido otorgue.
    int cantidadMaterial();

    //PRE:
    //POST:Va a sumar a la lista de materiales lo que el edificio que este custruido otorgue.
    string materialProducido();

    //PRE:
    //POST:Va a decir el tipo de edificio que tiene.
    void hablarSobreMi();

    virtual ~Aserradero();
};

#endif 