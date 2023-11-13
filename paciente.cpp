#include "paciente.h"

using namespace std;

Paciente::Paciente() {
}

Paciente::Paciente(string nombre, int edad, char genero, int altura, float masa) :
    nombre(nombre), edad(edad), genero(genero), altura(altura), masa(masa), positivo(false)
{
    // Incrementa el total de pacientes "creados" (instanciados)
    Paciente::totalPacientes++;
    // Asignar un numero al paciente
    id = Paciente::totalPacientes;
}

void Paciente::setPositivo(bool valor){
    this->positivo = valor;
}

bool Paciente::getPositivo(){
    return this->positivo;
}

string Paciente::estaContagiado(){
    /*
    if (this->positivo){
        return "Si";
    }else {
        return "No";
    }
    */
    return this->positivo ? "Si" : "No";
}

string Paciente::getDatos(){
    return "ID: " + to_string(this->id) + "\n" +
            "Nombre: " + this->nombre + "\n" +
            "Edad: " + to_string(this->edad) + "\n" +
            "Genero: "+ genero + "\n" +
            "Altura: "+ to_string(altura) + "cm\n" +
            "Masa: "+ to_string(masa) + "kg\n" +
            "Tiene Covid-19: " + this->estaContagiado() + "\n\n";
}










