#include <iostream>
#include <stdio.h>
#include "struct.h"

using namespace std;
/*
C REATE
R EAD
U UPDATE
D ELETE
*/

//CREATE
void addReg();
void showReg();
void menu();
void addReg(){
    cout << "*.*.*.*.* REGISTRO *.*.*.*.*\n";
    cout << "NOMBRE: ";
    scanf(" %[^\n]", people[pos].name); //acepta los espacios, lee los espacios hasta que el usuario introduzca un espacio
    cout << "EDAD: ";
    scanf("%d", & people[pos].age);
    cout << "DIRECCION: ";
    scanf(" %[^\n]", people[pos].adress);
    cout << "CIUDAD: ";
    scanf(" %[^\n]", people[pos].city);
    cout << "NUMERO DE TELEFONO: ";
    scanf(" %[^\n]", people[pos].number);
    
    pos++;

}


void showReg(){
     cout << "*.*.*.*.* DATOS DEL REGISTRO *.*.*.*.*\n";
    for (int i = 0; i < pos; i++){
        printf("NOMBRE: %s \nEDAD: %d \nDIRECCION: %s \nCIUDAD: %s \nNUMERO DE TELEFONO: %s" ,people[i].name, people[i].age , people[i].adress, people[i].city , people[i].number);
        cout << "\n*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*\n ";
    }
}

void menu(){
    int op=0;
    do
    {
        system("cls||clear");
        cout << " 1. Agregar \n ";
        cout << "2. Mostrar \n ";
        cout << "3. Salir \n ";
        cout << "Opcion: ";
        cin >> op;
        switch (op){
            case 1:
                addReg();
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
            case 2:
                showReg();
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
            case 3:
                cout << "Gracias por registrase\n";
                system("read -n 1 -s -p \"Presione una tecla para continuar...\"");
                break;
            default:
                cout << "Opcion no valida\n";
                break;
        }
        

    } while (op!=3);
    


}