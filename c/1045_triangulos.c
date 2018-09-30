#include<stdio.h>

int main () {
  float A, B, C, Am;
  scanf("%f %f %f", &A, &B, &C);
  // if(A < 0 || B < 0 || C < 0){nao forma triangulo}
    if (A < B){
        Am = A;
        A = B;
        B = Am;
    }
    if (B < C){
        Am = B;
        B = C;
        C = Am;
    }
    if (A < B){
        Am = A;
        A = B;
        B = Am;
    }
  if (A >= (B + C)) {
    printf("NAO FORMA TRIANGULO\n");
  }
  else{
		if (A * A == B * B + C * C) {
			printf("TRIANGULO RETANGULO\n");
		}
		if (A * A > B * B + C * C) {
			printf("TRIANGULO OBTUSANGULO\n");
		}
		if (A * A < B * B + C * C) {
			printf("TRIANGULO ACUTANGULO\n");
		}
		if (A == B && A == C) {
			printf("TRIANGULO EQUILATERO\n");
		}
		else if(A == B || A == C || B == C){
			printf("TRIANGULO ISOSCELES\n");
		}
  }
  
  return 0;
}
