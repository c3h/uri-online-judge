#include <stdio.h>

int main () {
  int A, B, m, me;
  
  scanf("%d %d", &A, &B);

  if (A > B){
  	m = A; 
	me = B;
  }
  else{
  	m = B; 
	me = A;
  }
  if (m % me == 0) {
    printf("Sao Multiplos\n");
  }
  else printf("Nao sao Multiplos\n");
  
  return 0;
}
