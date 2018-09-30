#include <stdio.h>

int main (){
	int a = 0, g = 0, d = 0, n;
	do{
		do{
			scanf("%d", &n);
		}while(n <= 0 || n > 4);
		if(n == 1){
			a++;
		}
		if(n == 2){
			g++;
		}
		if(n == 3){
			d++;
		}
	}while(n != 4);
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", a);
	printf("Gasolina: %d\n", g);
	printf("Diesel: %d\n", d);
	
	return 0;
}