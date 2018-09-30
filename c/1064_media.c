#include <stdio.h>

int main () {
	float num, media, positivo;
	int i, c = 0;
	for(i = 1; i <= 6; i++){
		scanf("%f", &num);
		if (num >= 0){
			c++;
			positivo += num;
		}
	}
	media = positivo / c;
	printf("%d valores positivos\n", c);
	printf("%.1f\n", media);
	
	return 0;
}