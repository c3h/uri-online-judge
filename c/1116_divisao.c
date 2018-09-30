#include <stdio.h>

int main(){
	int N, i; 
	float x, y, d;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		scanf("%f %f", &x, &y);
		if(y == 0){
			printf("divisao impossivel\n");
		}
		else if(x == 0){
			printf("0.0\n");
		}
		else{
			d = x / y;
			printf("%.1f\n", d);
		}
	}
}