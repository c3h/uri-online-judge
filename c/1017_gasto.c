#include <stdio.h>

int main (){
	int temp, vl, c_gasta;
	float k_percorrido, q_gasto;
	c_gasta = 12;
		scanf("%i", &temp);
		scanf("%i", &vl);
	k_percorrido = temp * vl;
	q_gasto = k_percorrido / c_gasta;
	printf("%.3f\n", q_gasto);
	return 0;
}