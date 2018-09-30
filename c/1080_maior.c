#include <stdio.h>

int main (){
	int num, i, maior = 0, cont = 0;
	for(i = 1; i <= 100; i++){
		scanf("%d", &num);
		if(i == 1){
			maior = num;
			cont = i;
		}
		if(num > maior){
			maior = num;
			cont = i;
		}
	}
	printf("%d\n", maior);
	printf("%d\n", cont);
	
	return 0;
}