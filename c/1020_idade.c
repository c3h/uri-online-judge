#include <stdio.h>

int main ( ) {
	int a, m, d, n;
	scanf("%d", &n);
	if (n >= 365) {
		a = n / 365;
		n = n - (a * 365);
	}
	if (n >= 30){
		m = n / 30;
		n = n - (m * 30);
	}
	d = n;
	printf("%d ano(s)\n", a);
	printf("%d mes(es)\n", m);
	printf("%d dia(s)\n", d);
}