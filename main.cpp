#include <iostream>
#include "Disco.h"
#include "Libro.h"
#include "Cliente.h"
#include "Gestion.h"


int main() {

    Cliente *cliente1 = new Cliente("Juan", 123);
    Libro*libro1 = new Libro("El principito", "Antoine de Saint-Exupery", 1, 100, cliente1);
    libro1->prestar();
    Disco*disco1 = new Disco("The Dark Side of the Moon", "Pink Floyd", 2, "Columbia", cliente1);
    disco1->prestar();
    delete libro1;
    delete disco1;
    delete cliente1;


    return 0;
}
//Entiendo que el error es de concepto, ya que lo pense como un prestamo y el liblo / disco no puede contener un cliente mas alla de que haga lo solicitado
