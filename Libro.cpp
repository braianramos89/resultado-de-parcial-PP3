
#include "Libro.h"
#include <iostream>


Libro::Libro(string titulo, string autor, int codigo, int cantidadPag, Cliente *cliente) : Gestion(titulo, autor, codigo) {
    this->cantidadPag = cantidadPag;
    this->cliente = cliente;//correccion(operador de igual  no definido)
}

Libro::~Libro() {

}

void Libro::prestar(){

    Gestion::prestar();
    cout<<"El titulo: "<<this->getTitulo()<<endl;//deberia haber usado los geters
    cout<<"El autor: "<<this->getAutor()<<endl;//deberia haber usado los geters
    cout<<"La cantidad de paginas: "<<this->cantidadPag<<endl;
}