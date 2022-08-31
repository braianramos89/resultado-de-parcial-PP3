#ifndef TEMPLATECPP_DISCO_H
#define TEMPLATECPP_DISCO_H
#include "Gestion.h"
#include "Cliente.h"
#include <iostream>

using namespace std;

class Disco : public Gestion {
private:
    string discografica;
    Cliente *cliente;

public:
    Disco(string titulo , string autor, int codigo , string discografica , Cliente*  cliente);
    ~Disco();
    void prestar();
};





#endif //TEMPLATECPP_DISCO_H
