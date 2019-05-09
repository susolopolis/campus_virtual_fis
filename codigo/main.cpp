#include "usuario.hpp"
#include "asignatura.hpp"

#include <iostream>
#include <istream>


using namespace std;

int main(void) {
    string Marcos="Marcos";
    string Perez="Perez"; 
    string Codigo="0";
    usuario profesor(Marcos, Perez,Codigo , 1);
    
    string asig="Calculo";
    asignatura calculo(asig);
    calculo.crear_lista(profesor, cin);
    calculo.descripcion();
    calculo.pasar_lista(profesor); 




    return 0;
}
