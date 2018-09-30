#include <stdio.h>
 
int main() {
 
    double valor_1, valor_2, codigo_1, codigo_2, numero_1, numero_2, custo; 
    scanf("%lf", &codigo_1);
    scanf("%lf", &numero_1);
    scanf("%lf", &valor_1);
    scanf("%lf", &codigo_2);
    scanf("%lf", &numero_2);
    scanf("%lf", &valor_2);
    custo = (valor_1 * numero_1) + (valor_2 * numero_2);
    printf("VALOR A PAGAR: R$ %.2lf\n", custo);
    
    return 0;
}