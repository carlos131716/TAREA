#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Estudiante
{
private:
    string semestre;
    string facultad;

public:
    Estudiante(string _facultad = "", string _semestre = "")
    {
        facultad = _facultad;
        semestre = _semestre;
    }

    void setDatoEstudiante(string _facultad, string _semestre)
    {
        facultad = _facultad;
        semestre = _semestre;
    }

    string getDataEstudiante()
    {
        return " Facultad: " + facultad + ", semestre:" + semestre;
    }

    // metodos de getter an setter

    void setFacultad(string _facultad)
    {
        facultad = _facultad;
    }

    string getsemestres()
    {
        return semestre;
    }

    void setsemestre(string _semestre)
    {
        semestre = _semestre;
    }
};