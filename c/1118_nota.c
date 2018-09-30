#include <stdio.h>

int main (){
	float ni, nii, n;
	int c, X;
	do {
		c = 0;
		n = 0;
		do{
			scanf("%f", &ni);
			if(ni < 0 || ni > 10){
				printf("nota invalida\n");
			}
			else{
				c++;
				n += ni;
			}
		}while(ni < 0 || ni > 10);
		do{
			scanf("%f", &nii);
			if(nii < 0 || nii > 10){
				printf("nota invalida\n");
			}
			else{
				c++;
				n += nii;
			}
		}while(nii < 0 || nii > 10);
		if(c == 2){
			printf("media = %.2f\n", n / 2);
			do{
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &X);
			}while(X < 1 || X > 2);
		}
	}while(X == 1);
	
	return 0;
}