#include <stdio.h>

int main (){
	int X, Y, i, ma, me, c = 0;
	scanf("%d %d", &X, &Y);
	if(X > Y){
		ma = X;
		me = Y;
	}
	else{
		ma = Y;
		me = X;
	}
	for(i = me; i <= ma; i++){
		if(i % 13 != 0){
			c += i;
		}
	}
	printf("%d\n", c);
	
	return 0;
}