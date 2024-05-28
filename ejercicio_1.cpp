#include <iostream>
#include <string>

using namespace std;


struct Contact {
    string nombre;
    int edad;
    string direccion;
    string ciudad;
    string telefono;
};

int main() {
    // Declaración de una instancia de la estructura Contacto
    Contact contacto;

    // Solicitando los datos del contacto al usuario
    cout << "Ingrese nombre: ";
    cin >> contacto.nombre;

    cout << "Ingrese edad: ";
    cin >> contacto.edad;

    cout << "Ingrese dirección: ";
    cin >> contacto.direccion;

    cout << "Ingrese ciudad: ";
    cin >> contacto.ciudad;

    cout << "Ingrese teléfono: ";
    cin >> contacto.telefono;

    // Mostrando los datos del contacto ingresado
    cout << "\nDatos del contacto:\n";
    cout << "Nombre: " << contacto.nombre << endl;
    cout << "Edad: " << contacto.edad << endl;
    cout << "Dirección: " << contacto.direccion << endl;
    cout << "Ciudad: " << contacto.ciudad << endl;
    cout << "Teléfono: " << contacto.telefono << endl;

    return 0;
}