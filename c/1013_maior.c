#include <stdio.h>
  
int main () {
  int A, B, C, M;
  
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  
  M = A;
  if (B > M){
  	M = B;
  }

  if (C > M){
  	M = C;
  }
  
  printf ("%d eh o maior\n", M);
  
 }
 
 
 ##############---------ou---------##############
 
 #include <stdio.h>
  
int main () {
  int A, B, C, M, S, Si;
  
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  
  S = A - B;
  if (S < 0){
  	S = S * -1;
  }
  
  M = (A + B + S) / 2;
  
  Si = S - C;
  if (Si < 0){
  	Si = Si * -1;
  }
  
  M = (S + C + Si) / 2;
  
  printf ("%d eh o maior\n", M);
  
 }