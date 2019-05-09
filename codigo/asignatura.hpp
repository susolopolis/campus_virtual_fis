

#include "usuario.cpp"
#include <vector>
#include <iostream>
#include <string>

class agignatura
{
private:
    std::string nombre_; 
    std::vector<usuario> lista_de_alumno_; //visible para profesor
    std::vector<tarea> entregables_;

public:
    agignatura(std::string nombre, std::vector<usuario> lista_de_alumno,  std::vector<tarea> entregables): 
        nombre_(nombre),
        lista_de_alumno_(lista_de_alumno),
        entregables_(entregables)
        {}
    ~agignatura();
};
