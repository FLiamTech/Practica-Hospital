
#include "hospital.h"

using namespace std;
Hospital::Hospital(){
}

Hospital::Hospital(string nombre) :
    nombre(nombre), pacientesIngresados(0)
{

}

void Hospital::ingresarPaciente(){
    string nombre;
    int edad;
    char genero;
    int altura;
    float masa;
    bool estaContagiado;

    cout << "\nIngrese el nombre del paciente: ";
    getline(cin>>ws, nombre);
    cout << "Ingrese la edad del paciente: ";
    cin >> edad;

    cout<<"Genero del paciente: ";
    do
    {
        cin>>genero;
        if(genero != 'F' && genero != 'M')
        {
            cout<<"Error..."<<endl;
        }
    }while(genero != 'F' && genero != 'M');

    cout<<"Altura del paciente: ";
    do
    {
        cin>>altura;
        if(altura < 0)
        {
            cout<<"Error..."<<endl;
        }
    }while(altura < 0);

    cout<<"Masa del paciente: ";
    do
    {
        cin>>masa;
        if(masa < 0)
        {
            cout<<"Error..."<<endl;
        }
    }while(masa < 0);

    // IMPORTANTISIMO !!!
    // Obtener el indice para el vector de pacientes
    int indice = this->pacientesIngresados; /*Cuantos pacientes estan*/

    // Crear el objeto y guardar en el vector
    this->pacientes[indice] = Paciente(nombre,edad,genero, altura, masa); /*Creando un objeto guardando en el vector*/

    cout << "Tiene Covit-19 (1=Si, 0=No): ";
    cin >> estaContagiado;
    this->pacientes[indice].setPositivo(estaContagiado);

       this->pacientesIngresados++; /*Incrementa en 1 el numero de pacientes ingresados*/
}

void Hospital::listarpacientes(){
    cout << "\n= =  HOSPITAL " + this->nombre + " = =" << endl;
    for (int i=0; i < this->pacientesIngresados; i++){
        cout << this->pacientes[i].getDatos();
    }
}


















