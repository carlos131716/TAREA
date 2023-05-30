#include <iostream>
#include <string>

using namespace std;

class Plato
{
private:
    string nombre_plato;
    int costo_plato;
    int num_platos;

public:
    Plato(string _nombre_plato = "", int _costo_plato = 0, int _num_platos = 0)
    {
        nombre_plato = _nombre_plato;
        costo_plato = _costo_plato;
        num_platos = _num_platos;
    }

    void setDatos2(string _nombre_plato, int _costo_plato, int _num_platos)
    {
        nombre_plato = _nombre_plato;
        costo_plato = _costo_plato;
        num_platos = _num_platos;
    }

    string getDataPlato()
    {
        return "-" + nombre_plato + ".... $" + to_string(costo_plato) + ".... Nro platos:" + to_string(num_platos);
    }
    // metodos de getter an setter

    string getNombre_platos()
    {
        return nombre_plato;
    }

    void setnombre_plato(string _nombre_plato)
    {
        nombre_plato = _nombre_plato;
    }

    int getCosto_plato()
    {
        return costo_plato;
    }

    void setCosto_plato(int _costo_plato)
    {
        costo_plato = _costo_plato;
    }

    int getNum_platos()
    {
        return num_platos;
    }

    void setNum_platos(int _num_platos)
    {
        num_platos = _num_platos;
    }

    string ImprimirtDatosPlato()
    {
        return getDataPlato();
    }
};