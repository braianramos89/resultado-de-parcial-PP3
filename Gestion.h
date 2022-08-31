
#ifndef TEMPLATECPP_GESTION_H
#define TEMPLATECPP_GESTION_H
#include <iostream>

using namespace std;

class Gestion {

private:
    string titulo;
    string autor;
    int codigo;

public:
    Gestion(string , string , int );
    ~Gestion();//correcion (virtual)
    void prestar();
    void setTitulo(string);
    void setAutor(string);
    void setCodigo(int);
    string getTitulo();
    string getAutor();
    int getCodigo();



};

inline void Gestion::setTitulo(string titulo) {

    this->titulo = titulo;
}

inline void Gestion::setAutor(string autor) {

    this->autor = autor;
}

inline void Gestion::setCodigo(int codigo) {

    this->codigo = codigo;
}
inline string Gestion::getTitulo() {

    return (this->titulo);
}

inline string Gestion::getAutor() {

    return (this->autor);
}

inline int Gestion::getCodigo() {
    return (this->codigo);
}


#endif //TEMPLATECPP_GESTION_H
