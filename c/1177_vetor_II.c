#include <stdio.h>

int main () {
	int N[1000], T, i, c = 0;
	scanf("%d", &T);
	for(i = 0; i < 1000; i++){
		if(c == T) {
			c = 0;
		}
		N[i] = c++;
	}
	for(i = 0; i < 1000; i++) {
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}