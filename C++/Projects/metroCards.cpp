#include <iostream>

using namespace std;

int main(){

    // Variables.
    int saldo = 20, recarga = 0;
    char opc;
    do{
        system("cls");
        cout << "\t\tRECARGA DE TARJETAS";
        cout << "\n\n\tSu saldo es de: $" << saldo;
        cout << "\n1. Recargar tarjeta." << endl;
        cout << "2. Contacto." << endl;
        cout << "S. Salir." << endl;
        cout << "De una opción: "; cin >> opc;
        switch (opc){
            case '1':
                system("cls");
                cout << "\t\tRECARGAR SALDO DE LA TARJETA." << endl;
                cout << "\n\tEl maximo a recargar es de $120!!!" << endl;
                cout << "De la cantidad a recargar: $"; cin >> recarga;
                if (recarga <= 120){
                    saldo = recarga + saldo;
                }else{
                    system("cls");
                    cout << "EL MÁXIMO ES $120" << endl;
                }
                break;
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        case '2':
            system("cls");
            cout << "Pink panther team || Care your data" << endl;
            break;
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        default:
            system("cls");
            cout << "De una opcion correcta...";
            break;
        }
    }while (opc != 'S');

    return 0;

}
