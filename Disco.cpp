
#include "Disco.h"

Disco::Disco(string titulo, string autor, int codigo, string discografica, Cliente *cliente) : Gestion(titulo, autor, codigo) {
    this->discografica = discografica;
    this->cliente = cliente;//correccion(en el igual MAL)
}

Disco::~Disco() {

}

void Disco::prestar() {

    Gestion::prestar();
    cout<<"El titulo: "<<this->getTitulo()<<endl;//deberia haber usado los geters
    cout<<"El autor: "<<this->getAutor()<<endl;//deberia haber usado los geters
    cout<<"La discografica: "<<this->discografica<<endl;
}