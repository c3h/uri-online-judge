#include <stdio.h>
 
int main() {
 
    double salario, total_vendas, bonus, salario_bonus;
    char nome;
    
    	scanf("%s", &nome);
    	scanf("%lf", &salario);
    	scanf("%lf", &total_vendas);
    	
    	bonus = salario + (total_vendas/100*15);
    	
    	printf("TOTAL = R$ %.2lf\n", bonus);
 
    return 0;
}