#include <stdio.h>

int main () {
  double A, B, C, T, CR, TR, Q, R, pi;
  pi = 3.14159;
  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);
  T = (A * C) / 2;
  CR = pi * (C * C);
  TR = ( A + B) * C / 2;
  Q = B * B;
  R = A * B;
  printf("TRIANGULO: %.3lf\n", T);
  printf("CIRCULO: %.3lf\n", CR);
  printf("TRAPEZIO: %.3lf\n", TR);
  printf("QUADRADO: %.3lf\n", Q);
  printf("RETANGULO: %.3lf\n", R);
}