#include <stdio.h>

int main () {
	float N;
	int i, c = 0;
	for (i = 1; i <= 6; i++){
		scanf("%f", &N);
		if (N >= 0){
			c++;
		}
	}
	printf("%d valores positivos\n", c);
}