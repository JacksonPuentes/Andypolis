#ifndef ESCUELA_H
#define ESCUELA_H
#include "edificio.h"

class Escuela : public Edificio
{
private:

    const int CANTIDADMATERIAL = 0;
    const string MATERIAL = "no brinda";

public:

    Escuela(string nombre);

    //PRE:
    //POST:Va a sumar a la lista de materiales lo que el edificio que este custruido otorgue.
    int cantidadMaterial();

    void imprimirLetra();

    //PRE:
    //POST:Va a sumar a la lista de materiales lo que el edificio que este custruido otorgue.
    string materialProducido();

    //PRE:
    //POST:Va a decir el tipo de edificio que tiene.
    void hablarSobreMi();

    virtual ~Escuela();
};

#endif 