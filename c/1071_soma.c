#include <stdio.h>

int main () {
  int X, Y, i, s, m, ma;
  scanf("%d %d", &X, &Y);
  if(X <= Y){
  	m = X;
  	ma = Y;
  }
  else{
  	m = Y;
  	ma = X;
  }
  s = 0;
  m = m + 1;
  ma = ma - 1;
  for(i = m; i <= ma; i++){
  	if(i % 2 != 0){
  		s += i;
	  }
  }
  printf("%d\n", s);
  return 0;
}
