#include <stdio.h>

int main (){
	int N, i, c = 0, s = 0, a = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++){
		a = c;
		while(c <= a + 3){
			if(c <= a + 2){
				printf("%d ", c + 1);
			}
			else{
				printf("PUM\n");
			}
			c++;
		}
	}
	
	return 0;
}