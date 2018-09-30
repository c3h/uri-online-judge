#include <stdio.h>
 
int main() {
 
    double X, Y, M;
    scanf("%lf", &X);
    scanf("%lf", &Y);
    M = X / Y;
    printf("%.3lf km/l\n", M);
 
    return 0;
}