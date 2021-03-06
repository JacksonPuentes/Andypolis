#ifndef MINA_H
#define MINA_H
#include "edificio.h"

class Mina : public Edificio
{
private:

    const int CANTIDADMATERIAL = 15;
    const string MATERIAL = "piedra";


public:

    Mina(string nombre);

    //PRE:
    //POST:Va a sumar a la lista de materiales lo que el edificio que este custruido otorgue.
    int cantidadMaterial();

    void devolverPosicion();

    void imprimirLetra();

    //PRE:
    //POST:Va a sumar a la lista de materiales lo que el edificio que este custruido otorgue.
    string materialProducido();

    //PRE:
    //POST:Va a decir el tipo de edificio que tiene.
    void hablarSobreMi();

    virtual ~Mina();
};

#endif //MINA_H