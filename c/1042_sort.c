#include <stdio.h>

int main () {
  int a, b, c, m, me, ma;
  
  scanf("%d %d %d", &a, &b, &c);

  if (a > b && a > c){
    ma = a;
    if (b > c){
      me = b;
      m = c;
    }
    else {
    	me = c; 
    	m = b;
    }
  }
  if (b > a && b > c) {
    ma = b;
    if (a > c) {
      me = a;
      m = c;
    }
    else {
    	me = c; 
    	m = a;
    }
  }
  if (c > a && c > b) {
    ma = c;
    if (a > b) {
      me = a;
      m = b;
    }
    else {
    	me = b; 
    	m = a;
    }
  }

  printf("%d\n", m);
  printf("%d\n", me);
  printf("%d\n", ma);
  printf("\n");
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
}
