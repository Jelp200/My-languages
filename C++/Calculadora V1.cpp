// Directivas de procesador
#include<iostream>
#include<cmath>

using namespace std;

// Programa principal
int main(){

    // Variables a utilizar
	char nopc, rp;
	int opc, ro1, ro2, nO1, nO2, nD1 = 0, nD2 = 0, exp = 0;
	float res = 0, nR1, nR2;

	cout << "\t\t*******************************************************"<<endl;
	cout << "\t\t**********            CALCULADORA            **********"<<endl;
    cout << "\t\t*******************************************************"<<endl;
	cout << "\t\t         PRESIONE CUALQUIER TECLA PARA INGRESAR: ";
	cin >> nopc;

	system("cls");

	if(nopc == nopc){
		do{
			cout << "\t\t   SELECCIONE LA OPERACION DESEADA" << endl;
			cout << "\n";
			cout << "\t\t   1.- Suma" << endl;
			cout << "\t\t   2.- Resta" << endl;
			cout << "\t\t   3.- Producto" << endl;
			cout << "\t\t   4.- Cociente" << endl;
			cout << "\t\t   5.- SALIR" <<endl;
			cout << "\tDe la opcion deseada: "; cin >> opc;

			switch(opc)
			{
				case 1:
					cout << "¿El primer numero es decimal? (1(Si)/0(No))"; cin >> ro1;
					if (ro1 == 1){
                        cout << "De el primer numero real: "; cin >> nR1;
					} else {
                        cout << "De el primer numero octal: "; cin >> nO1;
                        while(nO1 > 0){
                            nD1 = nD1 + (nD1%10 * pow(8, exp));
                            nO1 = nO1 / 10;
                            exp ++;
                        }
					}
					cout << "¿El segundo numero es decimal? (1(Si)/0(No))"; cin >> ro2;
					if (ro2 == 1){
                        cout << "De el segundo numero real: "; cin >> nR2;
					} else {
                        cout << "De el segundo numero octal: "; cin >> nO2;
                        while(nO1 > 0){
                            nD2 = nD2 + (nD2%10 * pow(8, exp));
                            nO2 = nO2 / 10;
                            exp ++;
                        }
					}

					if(ro1 == 1 && ro2 == 1){
                        res = nR1 + nR2;
                        cout << "La suma es: " << res;
					} else if (ro1 == 1 && ro2 != 1){
                        res = nR1 + nD1;
                        cout << "La suma es: " << res;
					} else if (ro1 != 1 && ro2 == 1){
                        res = nD1 + nR2;
                        cout << "La suma es: " << res;
					} else {
                        res = nD1 + nD2;
                        cout << "La suma es: " << res;
					}
				break;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				case 2:
					cout << "¿El primer numero es decimal? (1(Si)/0(No))"; cin >> ro1;
					if (ro1 == 1){
                        cout << "De el primer numero real: "; cin >> nR1;
					} else {
                        cout << "De el primer numero octal: "; cin >> nO1;
                        while(nO1 > 0){
                            nD1 = nD1 + (nD1%10 * pow(8, exp));
                            nO1 = nO1 / 10;
                            exp ++;
                        }
					}
					cout << "¿El segundo numero es decimal? (1(Si)/0(No))"; cin >> ro2;
					if (ro2 == 1){
                        cout << "De el segundo numero real: "; cin >> nR2;
					} else {
                        cout << "De el segundo numero octal: "; cin >> nO2;
                        while(nO1 > 0){
                            nD2 = nD2 + (nD2%10 * pow(8, exp));
                            nO2 = nO2 / 10;
                            exp ++;
                        }
					}

					if(ro1 == 1 && ro2 == 1){
                        res = nR1 - nR2;
                        cout << "La resta es: " << res;
					} else if (ro1 == 1 && ro2 != 1){
                        res = nR1 - nD1;
                        cout << "La resta es: " << res;
					} else if (ro1 != 1 && ro2 == 1){
                        res = nD1 - nR2;
                        cout << "La resta es: " << res;
					} else {
                        res = nD1 - nD2;
                        cout << "La resta es: " << res;
					}
				break;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				case 3:
					cout << "¿El primer numero es decimal? (1(Si)/0(No))"; cin >> ro1;
					if (ro1 == 1){
                        cout << "De el primer numero real: "; cin >> nR1;
					} else {
                        cout << "De el primer numero octal: "; cin >> nO1;
                        while(nO1 > 0){
                            nD1 = nD1 + (nD1%10 * pow(8, exp));
                            nO1 = nO1 / 10;
                            exp ++;
                        }
					}
					cout << "¿El segundo numero es decimal? (1(Si)/0(No))"; cin >> ro2;
					if (ro2 == 1){
                        cout << "De el segundo numero real: "; cin >> nR2;
					} else {
                        cout << "De el segundo numero octal: "; cin >> nO2;
                        while(nO1 > 0){
                            nD2 = nD2 + (nD2%10 * pow(8, exp));
                            nO2 = nO2 / 10;
                            exp ++;
                        }
					}

					if(ro1 == 1 && ro2 == 1){
                        res = nR1 * nR2;
                        cout << "El producto es: " << res;
					} else if (ro1 == 1 && ro2 != 1){
                        res = nR1 * nD1;
                        cout << "El producto es: " << res;
					} else if (ro1 != 1 && ro2 == 1){
                        res = nD1 * nR2;
                        cout << "El producto es: " << res;
					} else {
                        res = nD1 * nD2;
                        cout << "El producto es: " << res;
					}
				break;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				case 4:
					cout << "¿El primer numero es decimal? (1(Si)/0(No))"; cin >> ro1;
					if (ro1 == 1){
                        cout << "De el primer numero real: "; cin >> nR1;
					} else {
                        cout << "De el primer numero octal: "; cin >> nO1;
                        while(nO1 > 0){
                            nD1 = nD1 + (nD1%10 * pow(8, exp));
                            nO1 = nO1 / 10;
                            exp ++;
                        }
					}
					cout << "¿El segundo numero es decimal? (1(Si)/0(No))"; cin >> ro2;
					if (ro2 == 1){
                        cout << "De el segundo numero real: "; cin >> nR2;
					} else {
                        cout << "De el segundo numero octal: "; cin >> nO2;
                        while(nO1 > 0){
                            nD2 = nD2 + (nD2%10 * pow(8, exp));
                            nO2 = nO2 / 10;
                            exp ++;
                        }
					}

					if(ro1 == 1 && ro2 == 1){
                        res = nR1 / nR2;
                        cout << "El cociente es: " << res;
					} else if (ro1 == 1 && ro2 != 1){
                        res = nR1 / nD1;
                        cout << "El cociente es: " << res;
					} else if (ro1 != 1 && ro2 == 1){
                        res = nD1 / nR2;
                        cout << "El cociente es: " << res;
					} else {
                        res = nD1 / nD2;
                        cout << "El cociente es: " << res;
					}
				break;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				case 5:
					exit(0);
				break;
			}

			cout<<"\n";
			cout<<"\t\t   DESEA HACER OTRA OPERACION? ";
			cin>>rp;

			system("cls");
		}while(rp == 's' || rp == 'S');
	}

	system("pause");
	return 0;
}
