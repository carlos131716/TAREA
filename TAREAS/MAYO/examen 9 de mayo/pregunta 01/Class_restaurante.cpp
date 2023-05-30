#include <iostream>
#include <string>

using namespace std;

class Restaurante
{
private:
    string nombre;
    string direcion;
    int ventas_delivery;
    int ventas_mesa;

public:
    Restaurante(string _nombre = "", string _direcion = "", int _ventas_delivery = 0, int _ventas_mesa = 0)
    {
        nombre = _nombre;
        direcion = _direcion;
        ventas_delivery = _ventas_delivery;
        ventas_mesa = _ventas_mesa;
    }

    void setDatos2(string _nombre, string _direcion, int _ventas_delivery, int _ventas_mesa)
    {
        nombre = _nombre;
        direcion = _direcion;
        ventas_delivery = _ventas_delivery;
        ventas_mesa = _ventas_mesa;
    }

    string getDataRestaurante()
    {
        return "Restaurante " + nombre + ", direcion: " + direcion /*+ ", ventas por delivery: " + to_string(ventas_delivery) + ", ventas en mesa: " + to_string(ventas_mesa)*/;
    }
    // metodos de getter an setter
    string getNombres()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getDirecion()
    {
        return direcion;
    }

    void setDirecion(string _direcion)
    {
        direcion = _direcion;
    }

    int getVenta_delivery()
    {
        return ventas_delivery;
    }

    void setVentas_delivery(int _ventas_delivery)
    {
        ventas_delivery = _ventas_delivery;
    }

    int getVentas_mesa()
    {
        return ventas_mesa;
    }

    void setVentas_delivey(int _ventas_mesa)
    {
        ventas_mesa = _ventas_mesa;
    }

    string ImprimirtDatosRestaurante()
    {
        return getDataRestaurante();
    }
};