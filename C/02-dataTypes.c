/*
#############################################################################
**  FILE            : 02-dataTypes.c
**  PROYECT         : My-languages
**  SCHOOL          : ESIME Zacatenco | IPN
**  CAREER          : ICE
**  HERRAMIENTA     : Code::Blocks / VSC
**  COMPILER        : Mbed Online C Compiler
**  VERSION         : 20.03
**  DESCRIPTION     :
**                    Data types in C
**  VERSION         : 1.0
**  LOOK            : A
**  RELEASE         : 1.02.22
**  BUGS & FIXES    : NONE
#############################################################################
*/

/*
:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
**                            I N C L U D E S
** Processor directives
:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
*/
#include <stdio.h>
#include <stdbool.h>                                                        // Library to use bools

/*
-----------------------------------------------------------------------------
                               D E F I N E S
** Macros
-----------------------------------------------------------------------------
*/
#define pi 3.1416

/*
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                     G L O B A L   V A R I A B L E S
+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
int y = 5;

/*
#===============================================================================
|
|                         M A I N   P R O G R A M
|
#===============================================================================
*/
int main(){

    int x = 10;                                                                 // Local variables
    int S = 0;
    float SF = 0;

    S = pi + x;
    SF = pi + x;

    /* To print in the screen we use
    printf("Text %typeVar", Var);
    */

    printf("The sum is: %i in integers", S);
    printf("\nThe sum is: %.3f in floats or reals\n", SF);                         // To delimit the output we use %."decimalWeWant"f (%.2f)

    system("PAUSE");
    system("cls");

    // Data types
    int a = 5;                                                                  // 2 bytes = 16 bits
    float b = 5.16;                                                             // 4 bytes = 32 bits
    char c = 'C';                                                               // 1 bytes = 8  bits
    double e = 5.161322;                                                        // 8 bytes = 64 bits
    short f = 2;                                                                // 2 bytes = 16 bits
    long g = 2222222;                                                           // 4 bytes = 32 bits
    long double h = 213131313131313;
    unsigned int k = 123;                                                       // Only +, 2 bytes = 16 bits

    printf("The value of A is: %i", a);
    printf("\nThe value of B is: %.2f", b);
    printf("\nThe value of C is: %c", c);
    printf("\nThe value of E is: %lf", e);
    printf("\nThe value of F is: %i", f);
    printf("\nThe value of G is: %li", g);
    printf("\nThe value of K is: %i", k);

    return 0;
}
