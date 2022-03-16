// Directives and defines in a C program

// Directives
#include <stdio.h>                                              // Incluye la libreria estandar de entrada y salida en C.
#include <math.h>

#define PI 3.1416                                                                          // Global variable (We can use in all the program).

// Main function.
int main(){

    // local variables.
    float r, L;

    printf("Give the radius of the circle: "); scanf("%f", &r);

    L = PI * (pow(r, 2));

    printf("\n The long of the circle is: %.2f", L);           //"%.2f" is the ----.

    return 0;
}