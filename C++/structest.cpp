// Directives
#include <iostream>
#include <conio.h>

// Namesapces
using namespace std;

// Structs
struct Grupo{
    int nGrupo;
    int edf;
    int piso;
}

struct Alumno{
    struct Grupo alumno;
    char nombre[30];
    double promedio;
}alumnos[30];

// Main function
int main(){
    for (int i = 0; i < 30; i++){
        fflush(stdin);                                          // Buffer liberado
        cout << "De el numero del grupo: "; cin >> alumnos.
    }
    return 0;
}