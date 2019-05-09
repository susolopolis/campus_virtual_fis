#include "usuario.hpp"
#include <vector>
#include <iostream>
#include <istream>
#include <string>

class asignatura
{
private:
    std::string nombre_;
    std::vector<usuario> lista_de_alumno_; //visible para profesor
    std::vector<tarea> entregables_;

public:
    asignatura(std::string nombre) : nombre_(nombre)
    {
    }
    ~asignatura(){}

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

                usuario aux(nombre, apellido, codigo, false);
                lista_de_alumno_.push_back(aux);
            }
        }
    }

    void descripcion()
    {
        int i = 0;
        while (i < lista_de_alumno_.size())
        { 
            cout << lista_de_alumno_[i].get_code() << ", " << lista_de_alumno_[i].get_name() << " " << lista_de_alumno_[i].get_last_name() << endl;
            i++;
        }
    }

    void pasar_lista()
    {
        
    }
    };
