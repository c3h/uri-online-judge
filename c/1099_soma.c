#include <stdio.h>

int main() {
	int N, X, Y, i, maior, menor, c, soma;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d %d", &X, &Y);
		if (X == Y || (X + 1) == Y){
			printf("0\n");
		}
		else{
			if (X > Y){
				maior = X;
				menor = Y;
			}
			else{
				maior = Y;
				menor = X;
			}
			if (maior % 2 == 0 && menor == maior){
				printf("0\n");
			}
			else {
				for (c = menor+1; c < maior; c++){
					if(c % 2 != 0){
						soma += c;
					}
				}
			}
			printf("%d\n", soma);
		}
		soma = 0;
		}	

	return 0;
}