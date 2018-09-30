#include <stdio.h>

int main () {
	int N[10], X, I = 0;
	scanf("%d", &X);
	N[I] = X;
	for(I = 1; I < 10; I++){
		X = X * 2;
		N[I] = X;
	}
	for(I = 0; I < 10; I++){
		printf("N[%d] = %d\n", I, N[I]);
	}
	
	return 0;
}