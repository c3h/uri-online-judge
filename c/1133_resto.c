#include<stdio.h>

int main (){
	int X, Y, i, c, m;
	scanf("%d %d", &X, &Y);
	if(X < Y){
		m = Y;
		Y = X;
		X = m;
	}
	for(i = Y + 1; i < X; i++){
		if(i % 5 == 2 || i % 5 == 3){
			printf("%d\n", i);
		}
	}
	return 0;
}