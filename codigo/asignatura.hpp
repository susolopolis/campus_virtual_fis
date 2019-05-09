#include "usuario.hpp"
#include <vector>
#include <iostream>
#include <istream>
#include <string>

class agignatura
{
private:
    std::string nombre_;
    std::vector<usuario> lista_de_alumno_; //visible para profesor
    std::vector<tarea> entregables_;

public:
    agignatura(std::string nombre, std::vector<usuario> lista_de_alumno, std::vector<tarea> entregables) : nombre_(nombre),
                                                                                                           lista_de_alumno_(lista_de_alumno),
                                                                                                           entregables_(entregables)
    {
    }
    ~agignatura();

    void crear_lista(usuario prof, std::istream &is)
    {
        if (prof.isProfesor())
        {
            while (!is.eof())
            {
                int codigo;
                std::string nombre;
                std::string apellido;
                is >> codigo;
                is >> nombre;
                is >> apellido;
            }
        }
    }
};
