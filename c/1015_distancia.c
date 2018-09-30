#include <stdio.h>
#include <math.h>

int main (){
	float xi, xii, yi, yii, pi, pii;
	double d;
	scanf("%f", &xi);
	scanf("%f", &yi);
	scanf("%f", &xii);
	scanf("%f", &yii);
	pi = (xii - xi);
	pii = (yii - yi);
	d = sqrt(pi * pi + pii * pii);
	printf("%.4lf\n", d);

	return 0;
}