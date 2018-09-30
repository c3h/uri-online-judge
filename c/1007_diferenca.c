#include <stdio.h>
 
int main() {
 
    double A, B, C, D, DIFERENCA;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    scanf("%lf", &D);
    DIFERENCA = (A * B) - (C * D);
    printf("DIFERENCA = %.lf\n", DIFERENCA);
 
    return 0;
}