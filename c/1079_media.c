#include <stdio.h>

int main (){
	int N, i, c = 0;
	float j1, j2, j3, soma;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		j1 = 0;
		j2 = 0;
		j3 = 0;
		scanf("%f %f %f", &j1, &j2, &j3);
		j1 *= 2;
		j2 *= 3;
		j3 *= 5;
		soma = (j1 + j2 + j3) / 10;
		printf("%.1f\n", soma);
	}
	
	return 0;
}