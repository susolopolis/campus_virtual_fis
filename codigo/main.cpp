#include "usuario.hpp"
#include "asignatura.hpp"

#include <iostream>
#include <istream>


using namespace std;

int main(void) {
    string Marcos="Marcos";
    string Perez="Perez"; 
    usuario profesor(Marcos, Perez, 0, 1);
    
    string asig="Calculo";
    asignatura calculo(asig);
    calculo.crear_lista(profesor, cin);
    calculo.descripcion();
    calculo.pasar_lista(); 




    return 0;
}
