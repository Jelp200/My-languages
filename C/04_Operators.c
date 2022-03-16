// The arithmrtic operators in C.

/*
    Sum         +
    Minus       -
    Product     *
    Division    /
    Module      %
*/

// Directives
#include <stdio.h>

// Main function
int main(){

    int n1, n2, s = 0, m = 0, p = 0, d = 0, mod = 0;

    puts("Give the first number: "); scanf("%i", &n1);
    puts("Give the second number: "); scanf("%i", &n2);

    s = n1 + n2;
    m = n1 - n2;
    p = n1 * n2;
    d = n1 / n2;
    mod = n1 % n2;

    system("cls");

    printf("%i", s);
    printf("%i", m);
    printf("%i", p);
    printf("%i", d);
    printf("%i", mod);

    return 0;
}