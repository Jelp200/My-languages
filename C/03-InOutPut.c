/*
#############################################################################
**  FILE            : 03-InOutPuts.c
**  PROYECT         : My-languages
**  SCHOOL          : ESIME Zacatenco | IPN
**  CAREER          : ICE
**  HERRAMIENTA     : Code::Blocks / VSC
**  COMPILER        : Mbed Online C Compiler
**  VERSION         : 20.03
**  DESCRIPTION     :
**                    How to print in the screen and scan data to the PC
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

/*
#===============================================================================
|
|                         M A I N   P R O G R A M
|
#===============================================================================
*/
int main(){

    int n1, n2, S = 0;

    // Input
    puts("Give the first number: "); scanf("%i", &n1);                          // scan("%dataType", &savedVariable);
    puts("Give the second number: "); scanf("%i", &n2);

    S = n1 + n2;

    printf("The sum of the N1 & N2 is: %i", S);

    return 0;
}
