#include <stdio.h>
 
int main() {
 
    double sf, ht, nf, rc;
    	//sf = salario funcionario
    	//ht = horas trabalhadas 
    	//nf = numero de funcionarios 
    	//rc = recebe por horas 
    	
    scanf("%lf", &nf);
    scanf("%lf", &ht);
    scanf("%lf", &rc);
    sf = ht * rc;
    printf("NUMBER = %.lf\n", nf);
    printf("SALARY = U$ %.2lf\n", sf);
    
    return 0;
}