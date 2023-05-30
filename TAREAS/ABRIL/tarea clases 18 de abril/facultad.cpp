//libreria
#include <string>
#include <iostream>

using namespace std;

class estudiante{
private:
    // atributos
    string codigo;
    string descripcion;
    string siglas;

    // metodos y funciones
public:
    // constructor
    estudiante(string _codigo, string _descripcion, string _siglas)
    {
        codigo = _codigo;
        descripcion = _descripcion;
        siglas = _siglas;
    }

    string getSiglas()
    {
        return siglas;
    }
    void setSiglas(string _siglas)
    {
        siglas = _siglas;
    }

    string getDescripcion()
    {
        return descripcion;
    }
    void setDescripcion(string _descripcion)
    {
        descripcion = _descripcion;
    }

    string getCodigo()
    {
        return codigo;
    }
    void setCodigo(string _codigo)
    {
        codigo = _codigo;
    }
    //hacemos una funcion para imprimir los datos de la persona
    void getDatos(){
        cout<<"LOS DATO DEL ALUMNO ES:"<<endl;
        cout<<"el codigo es :"<<codigo<<endl;
        cout<<"la descripcion es :"<<descripcion<<endl;
        cout<<"las Siglas son :"<<siglas<<endl;
    }
};
int main(){
    //declaramos variable
    estudiante alumno1("14124", "Programacion Basica","A.S");
    estudiante alumno2("0001", "Diseño de BD", "D.G");
    estudiante alumno3("0001", "Sotfware I", "S.F");
    
    //imprimimos la funcion
    alumno1.getDatos();
    alumno2.getDatos();
    alumno3.getDatos();
    return 0;
}