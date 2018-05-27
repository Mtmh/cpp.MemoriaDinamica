#include <iostream>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double salario;

    Persona(); //<-- Construtores
    Persona(const string &nom, int e, double s);

    ~Persona(); //<--- Destructor

    void imprime() const;
};

int main()
{
    Persona *juan, *pedro;

    juan  = new Persona("Juan", 20, 500.0);
    pedro = new Persona;

    pedro->nombre = "Pedro";
    pedro->edad = 30;
    pedro->salario = 600.0;

    pedro->imprime();
    juan->imprime();

    delete juan; //destructor
    delete pedro;// ""

    return 0;
}

Persona::Persona()
{
   nombre = "";
   edad = 0;
   salario = 0.0;

}

Persona::Persona(const string &nom, int e, double s)
{
    nombre = nom;
    edad = e;
    salario = s;
}

Persona::~Persona() // destructor
{
    cout << "----------" << endl;
    cout << "Destructor" << endl;
    cout << "----------" << endl;
    cout << endl;
    cout << "Adios " << nombre << endl;
    cout << endl;
}

void Persona::imprime() const
{
    cout << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Salario: " << salario << endl;
    cout << endl;
}
