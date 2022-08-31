
#ifndef TEMPLATECPP_LIBRO_H
#define TEMPLATECPP_LIBRO_H
#include "Gestion.h"
#include "Cliente.h"//no lo puse pero no me lo corrigio
#include <iostream>

using namespace std;

class Libro : public Gestion {
private:
    int cantidadPag;
    Cliente *cliente;
public:

    Libro(string , string , int , int , Cliente*  cliente);//falto * pero no lo corrgio
    ~Libro();
    void prestar();
};



#endif //TEMPLATECPP_LIBRO_H
