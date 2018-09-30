#include <stdio.h>

int main (){
	float ni, nii, n;
	n = 0;
	do{
		scanf("%f", &ni);
		if(ni < 0 || ni > 10){
			printf("nota invalida\n");
		}
		else{
			n += ni;
		}
	}while(ni < 0 || ni > 10);
	do{
		scanf("%f", &nii);
		if(nii < 0 || nii > 10){
			printf("nota invalida\n");
		}
		else{
			n += nii;
		}
	}while(nii < 0 || nii > 10);

	printf("media = %.2f\n", n/2);
	
	return 0;
}