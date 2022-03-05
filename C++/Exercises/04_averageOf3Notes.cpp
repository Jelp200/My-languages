// Calculate the average of three grades and say if the student passes or fails

// Directives
#include <iostream>

// Name space
using namespace std;

//Main function
int main(){

    float c1, c2, c3, P = 0;

    cout << "First partial note: "; cin >> c1;
    cout << "Second partial note: "; cin >> c2;
    cout << "Third partial note: "; cin >> c3;

    P = (c1 + c2 + c3) / 3;

    // This block of code is a plus to understand the control sequences for first time.
    if (P >= 6){
        system("cls");
        cout << "You're approved and your average is : " << P;
    } else{
        system("cls");
        cout << "You did not approve ";
    }

    return 0;
}
