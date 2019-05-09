#include "usuario.hpp"
#include <vector>
#include <iostream>
#include <fstream>
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
    ~asignatura() {}

    void crear_lista(usuario prof, std::istream &is)
    {
        if (prof.isProfesor())
        {
            string doc;

            cout << "Ingresa el nombre del archivo que quieres leer(sin el .txt): ";

            getline(cin, doc);
            doc += ".txt";

            fstream fs;
            fs.open(doc.c_str(), ios::in);

            while (!fs.eof())
            {
                std::string codigo;
                std::string nombre;
                std::string apellido;

                getline(fs, codigo, '\t');
                getline(fs, nombre, '\t');
                getline(fs, apellido, '\t');

                usuario aux(nombre, apellido, codigo, false);
                lista_de_alumno_.push_back(aux);
            }
            fs.close();
        }
    }

    void descripcion()
    {
        int i = 0;
        while (i < lista_de_alumno_.size())
        {
            cout << lista_de_alumno_[i].get_code() << ", " << lista_de_alumno_[i].get_name() << " " << lista_de_alumno_[i].get_last_name()<<endl;
            i++;
        }
    }

    void pasar_lista(usuario prof)
    {
        if (prof.isProfesor())
        {
            string doc;
            string codigo;

            cout << "Fecha:";
            getline(cin, doc);
            doc += ".txt";

            cout << "Codigo de asistencia alumno: ";
            getline(cin, codigo);
            ofstream fs;
            fs.open(doc.c_str());

            fs << codigo << endl;
            fs.close();
            cout << "La lista ha pasado correctamente" << endl;
        }
    }
};
