#ifndef PACIENTE_H
#define PACIENTE_H


#include <string>
using namespace std;

class Paciente{
private:
    int id;				// Numero de identificacion del paciente
    string nombre;		// Nombre del paciente
    int edad;			// Edad del paciente
    char genero;        /* Genero del paciente*/
    int altura;       /* Altura del paciente - cm*/
    float masa;         /* Masa del paciente - kg*/
    bool Alta;      /* Si es dado de alta o no un paciente*/
    bool positivo;		// Si la prueba de Covid-19 es positiva
    string estaContagiado();	// Retorna Si o No segun la prueba (positivo)
    string dadoAlta();

public:
    Paciente();					// Constructor por defecto
    Paciente(string, int, char, int, float);		// Constructor
    void setPositivo(bool);		// Establecer si la prueba es positiva
    bool getPositivo();			// Obtener si el paciente dio positivo en la prueba
    string getDatos();			// Obtener un string con los datos del paciente

    static int totalPacientes;	// Llevar la cuenta de pacientes
};

#endif // PACIENTE_H
