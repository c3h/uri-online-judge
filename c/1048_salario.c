#include <stdio.h>

int main () {
	double salario, aumento;
	int p_reajuste;
	scanf ("%lf", &salario);
	if (salario >= 0.0 && salario <= 400.00){
		p_reajuste = 15;
		aumento = salario * p_reajuste / 100;
		salario = salario + aumento;
	}
	else if (salario >= 400.01 && salario <= 800.00){
		p_reajuste = 12;
		aumento = salario * p_reajuste / 100;
		salario = salario + aumento;
	}
	else if (salario >= 800.01 && salario <= 1200.00){
		p_reajuste = 10;
		aumento = salario * p_reajuste / 100;
		salario = salario + aumento;
	}
	else if (salario >= 1200.01 && salario <= 2000.00){
		p_reajuste = 7;
		aumento = salario * p_reajuste / 100;
		salario = salario + aumento;
	}
	else if (salario > 2000.01){
		p_reajuste = 4;
		aumento = salario * p_reajuste / 100;
		salario = salario + aumento;
	}
	printf("Novo salario: %.2lf\n", salario);
	printf("Reajuste ganho: %.2lf\n", aumento);
	printf("Em percentual: %d %%\n", p_reajuste);
}