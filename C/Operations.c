// Make a program can do the essential arithmetic operations.

// Headers
#include <stdio.h>

// Global variables.
int S = 0, R = 0, P = 0;
float D = 0;

// Main program
int main(){
    // Local variables.
    int n1, n2;

    puts("Give the firts number: "); scanf("%i", &n1);
    puts("Give the second number: "); scanf("%i", &n2);

    S = n1 + n2;
    R = n1 - n2;
    P = n1 * n2;
    D = n1 / n2;

    system("cls");

    printf("The results of the operations are: \t\n%i\t\n%i\t\n%i\t\n%.2f", S, R, P, D);

    return 0;
}

/*
    We can use functions to, and the program is goin to take the next structure.

    int SUM (int N1, int N2){
        int sum = N1 + N2;
        return sum;
    }
    int RES (int N1, int N2){
        int res = N1 / N2;
        return res;
    }
    int PRO (int N1, int N2){
        int pro = N1 * N2;
        return pro;
    }
    float DIV (int N1, int N2){
        float div = N1 / N2;
        return div;
    }

    int main(){
        int n1, n2;

        puts("Give the firts number: "); scanf("%i", &n1);
        puts("Give the second number: "); scanf("%i", &n2);

        printf("The results of the operations are: \t\n%i\t\n%i\t\n%i\t\n%.2f", SUM(n1, n2), RES(n1, n2), PRO(n1, n2), DIV(n1, n2));
    }
*/