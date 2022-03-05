// Code in C++ the next expression to solve a problem 'The division of a and b plus one'.

// Directives
#include <iostream>
#include <conio.h>

// Name spaces
using namespace std;

// Main
int main(){

    float a, b, D = 0;

    cout << "Give a: "; cin >> a;
    cout << "Give b: "; cin >> b;

    D = (a/b) + 1;

    cout.precision(2);                              // With this line can give a precision for the decimals
    cout << "\nThe result is: " << D << endl;

    getchar();

    return 0;
}
