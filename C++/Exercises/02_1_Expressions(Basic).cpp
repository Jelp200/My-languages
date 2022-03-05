// Code in C++ the next expression to solve a problem ' a plus the quotient of b and c minus d'.

// Directives
#include <iostream>
#include <conio.h>

// Name spaces
using namespace std;

// Main
int main(){

    float a, b, c, d, S = 0;

    cout << "Give a: "; cin >> a;
    cout << "Give b: "; cin >> b;
    cout << "Give c: "; cin >> c;
    cout << "Give d: "; cin >> d;

    S = a + (b / (c-d));

    cout.precision(3);                              // With this line can give a precision for the decimals
    cout << "\nThe result is: " << S << endl;

    getchar();

    return 0;
}
