#include <iostream>
#include <conio.h>

using namespace std;

// Delcaramos la estructura
struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Jorge", 21},
persona2 = {"Karol", 22},
persona3
;


int main(){

    cout << "Nombre 1: " << persona1.nombre;
    cout << "\nEdad 1: " << persona1.edad;

    cout << "\nNombre 2: " << persona2.nombre;
    cout << "\nEdad 2: " << persona2.edad;

    system("PAUSE");
    system("cls");

    cout << "De el nombre de la persona 3: "; cin.getline(persona3.nombre, 20, '\n');
    cout << "De la edad de la persona 3: "; cin >> persona3.edad;

    system("cls");

    cout << "Todos los nombres y edades de las personas son." << endl;
    cout << "\nPersona     |   Edad    " << endl;
    cout << persona1.nombre << "    |   " << persona1.edad << endl;
    cout << persona2.nombre << "    |   " << persona2.edad << endl;
    cout << persona3.nombre << "    |   " << persona3.edad << endl;

    getch();

    return 0;
}
