#include <stdio.h>
int main (){
	int N, s = 0, m = 0, h = 0;
	scanf("%i", &N);
	if (N >= 3600){
		h = N / 3600;
		N = N - (h * 3600);
	}
	if (N >= 60) {
		m = N / 60;
		N = N - (m * 60);
	}
	s = N;
	
	printf("%i:%i:%i\n", h, m, s);
	
	return 0;
}