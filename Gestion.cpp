
#include "Gestion.h"
#include <iostream>


Gestion::Gestion(string titulo, string autor, int codigo) {
    this->titulo = titulo;
    this->autor = autor;
    this->codigo = codigo;
}
Gestion::~Gestion() {}

void Gestion::prestar(){

    int dd,mm,dev;
    cout<<"Ingrese el dia de hoy: "<<endl;
    cin>>dd;
    cout<<"Ingrese el mes de actual: "<<endl;
    cin>>mm;
    if(dd<23){

        cout<<"Se devolvera el: "<<dd+7<<" de este mes"<<endl;
    }else{
        cout<<"Se devolvera el dia 30 "<<endl;
    }

}//correcion (NO)

