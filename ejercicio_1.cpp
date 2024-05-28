#include <iostream>
#include <string>
using namespace std;

// Definir la estructura Dirección
struct Direccion {
    string nombre;
    int edad;
    string direccion;
    string ciudad;
    string telefono;
};

int main() {
    // Crear una instancia de la estructura Dirección
    Direccion dir;

    // Pedir al usuario que introduzca los datos
    cout << "Ingrese el nombre: ";
    getline(cin, dir.nombre);

    cout << "Ingrese la edad: ";
    cin >> dir.edad;
    cin.ignore(); // Ignorar el salto de línea pendiente

    cout << "Ingrese la direccion: ";
    getline(cin, dir.direccion);

    cout << "Ingrese la ciudad: ";
    getline(cin, dir.ciudad);

    cout << "Ingrese el telefono: ";
    getline(cin, dir.telefono);

    // Mostrar los datos ingresados
    cout << "\nDatos ingresados:\n";
    cout << "Nombre: " << dir.nombre << "\n";
    cout << "Edad: " << dir.edad << "\n";
    cout << "Direccion: " << dir.direccion << "\n";
    cout << "Ciudad: " << dir.ciudad << "\n";
    cout << "Telefono: " << dir.telefono << "\n";

    return 0;
}
