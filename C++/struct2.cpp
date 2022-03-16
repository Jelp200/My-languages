// Directivas
#include <iostream>
#include <conio.h>

// Namespace
using namespace std;

// Structs
struct infoUni{
    char uni[40];
    char escuela[40];
    char carrera[40];
};

struct alumno{
    struct infoUni Uni;
    string nombre[20];
    float prom;
}alumnos[10];

int main(){

    // Pide a los alumnos.
    for (int i = 0; i < 10; i++){
        fflush(stdin);                                              // Vaciamos el buffer
        cout << "De el nombre: "; cin.getline(alumnos[i].nombre, "\n");
        cout << "De la universidad: "; cin.getline(alumnos[i].Uni.uni, 40, "\n");
        cout << "De la Escuela/Facultad: "; cin.getline(alumnos[i].Uni.escuela, 40, "\n");
        cout << "De la carrera: "; cin.getline(alumnos[i].Uni.carrera, 40, "\n");
        cout << "De el promedio: "; cin >> alumnos[i].prom;
        system("cls");
    }

    // Muestra los datos
    for (int i = 0; i < 10; i++){
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Universidad: " << alumnos[i].Uni.uni << endl;
        cout << "Escuela/Facultad: " << alumnos[i].Uni.escuela << endl;
        cout << "Carrera: " << alumnos[i].Uni.carrera << endl;
        cout << "Promedio: " << alumnos[i].prom;
        cout << "-------------------------------------------------------------------------------------------" << endl;
    }

    return 0;
}
