#include <stdio.h>

int main () {
	int X, Y, maior, menor, i, soma, c = 1;
	while(c == 1){
		soma = 0;
		scanf("%d %d", &X, &Y);
		if(X > 0 && Y > 0){
			if(X > Y){
				maior = X;
				menor = Y;
			}
			else {
				maior = Y;
				menor = X;
			}
			for(i = menor; i <= maior; i++){
				printf("%d ", i);
				soma += i;
			}
			printf("Sum=%d\n", soma);
			c = 1;
		}
		else c = 0;
	}
	return 0;
}