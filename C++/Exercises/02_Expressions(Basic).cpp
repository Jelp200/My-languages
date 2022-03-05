// Code in C++ the next expression to solve a problem 'The division of a plus the quotient of b and c and d plus the quotient of e and f'.

// Directives
#include <iostream>
#include <conio.h>

// Name spaces
using namespace std;

// Main
int main(){

    float a, b, c, d, e, f, D = 0;

    cout << "Give a: "; cin >> a;
    cout << "Give b: "; cin >> b;
    cout << "Give c: "; cin >> c;
    cout << "Give d: "; cin >> d;
    cout << "Give e: "; cin >> e;
    cout << "Give f: "; cin >> f;

    D = (a + (b/c)) / (d + (e/f));

    cout.precision(3);                              // With this line can give a precision for the decimals
    cout << "\nThe result is: " << D << endl;

    getchar();

    return 0;
}
