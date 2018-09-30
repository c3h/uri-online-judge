#include <stdio.h>

int main () {
  float N1, N2, N3, N4, M;
  N1 = N1 * 2;
  N2 = N2 * 3;
  N3 = N3 * 4;
  N4 = N4 * 1;

  M = (N1 + N2 + N3 + N4) / 10;
  if (M >= 7.0) printf("Aluno aprovado\n");
  if (M <= 5.0) printf("Aluno reprocado\n");

  return 0;
}
