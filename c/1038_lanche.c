#include <stdio.h>

int main (){
  int n1, n2;
  float c;

  scanf("%d %d", &n1, &n2);

  if (n1 == 1){
      c = 4 * n2;
  }
  if (n1 == 2){
    c = 4.5 * n2;
  }
  if (n1 == 3) {
    c = 5 * n2;
  }
  if (n1 == 4) {
    c = 2 * n2;
  }
  if (n1 == 5) {
    c = 1.5 * n2;
  }
  printf("Total: R$ %.2f\n", c);

  return 0;
}
