// Realize a exchange of two variables

// Directives
#include <iostream>

// Name spaces
using namespace std;

// Main function
int main(){

    char x, y, aux;

    cout << "Give the char value of x: "; cin >> x;
    cout << "Give the char value of y: "; cin >> y;

    /*
        x <- char
        y <- char

        aux <- char(x)

        x <- char(y)
        y <- char(aux) = char(x)
    */

    aux = x;
    x = y;
    y = aux;

    system("cls");

    cout << "\nThe new value of x is: " << x << endl;
    cout << "The new value of y is: " << y << endl;

    system("PAUSE");

    return 0;
}
