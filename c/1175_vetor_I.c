#include <stdio.h>

int main () {
	int N[20], Y, i, t, e = 0;
	for (i = 0; i < 20; i++){
		scanf("%i", &Y);
		N[i] = Y;
	}
	for(i = 19; i >= 0; i--){
		printf("N[%d] = %d\n", e, N[i]);
		e++;
	}
}