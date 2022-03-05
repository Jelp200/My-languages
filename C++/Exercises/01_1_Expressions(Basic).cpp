// Code in C++ the next expression to solve a problem 'The division of a plus b and c plus d'.

// Directives
#include <iostream>
#include <conio.h>

// Name spaces
using namespace std;

// Main
int main(){

    float a, b, c, d, D = 0;

    cout << "Give a: "; cin >> a;
    cout << "Give b: "; cin >> b;
    cout << "Give c: "; cin >> c;
    cout << "Give d: "; cin >> d;

    D = (a + b) / (c + d);

    cout.precision(3);                              // With this line can give a precision for the decimals
    cout << "\nThe result is: " << D << endl;

    getchar();

    return 0;
}
