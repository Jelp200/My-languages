// The arithmetic operators in C++.

/*
    Sum         +
    Minus       -
    Product     *
    Division    /
    Module      %
*/

// Directives
#include <stdio.h>
#include <iostream>

// Namespaces
using namespace std;

// Main function
int main(){

    int n1, n2, s = 0, m = 0, p = 0, d = 0, mod = 0;

    cout << "Give the first number: "; cin >> n1;
    cout << "\nGive the second number: "; cin >> n2;

    s = n1 + n2;
    m = n1 - n2;
    p = n1 * n2;
    d = n1 / n2;
    mod = n1 % n2;

    system("cls");

    cout << s << endl;
    cout << m << endl;
    cout << p << endl;
    cout << d << endl;
    cout << mod << endl;

    return 0;
}
