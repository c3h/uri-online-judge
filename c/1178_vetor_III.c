#include <stdio.h>

int main () {
	double N[100], X;
	int i = 0;
	scanf("%lf", &X);
	N[i] = X;
	for(i = 1; i < 100; i++){
		X = X / 2;
		N[i] = X;
	}
	for(i = 0; i < 100; i++){
		printf("N[%d] = %.4lf\n", i, N[i]);
	}
	
	return 0;
}