#include <stdio.h>

int main (){
	int N, a, b, c, d, e, f, g, h;
	scanf("%i", &N);
	a = N / 100;
	b = (N - a * 100) / 50;
	c = (N - a * 100 -b * 50) / 20;
	d = (N - a * 100 -b * 50 - c * 20) / 10;
	e = (N - a * 100 -b * 50 - c * 20 - d * 10) / 5;
	f = (N - a * 100 -b * 50 - c * 20 - d * 10 - e * 5) / 2;
	g = (N - a * 100 -b * 50 - c * 20 - d * 10 - e * 5 - f * 2) / 1;
	
	printf("%i\n", N);
	
	printf("%i nota(s) de R$ 100,00\n", a);
	printf("%i nota(s) de R$ 50,00\n", b);
	printf("%i nota(s) de R$ 20,00\n", c);
	printf("%i nota(s) de R$ 10,00\n", d);
	printf("%i nota(s) de R$ 5,00\n", e);
	printf("%i nota(s) de R$ 2,00\n", f);
	printf("%i nota(s) de R$ 1,00\n", g);
	
	return 0;
}