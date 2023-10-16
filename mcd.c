#include <stdio.h>

int mcd(int a, int b) {
  int resto;
  while (b != 0) {
    resto = a % b;
    a = b;
    b = resto;
  }
  return a;
}

int main() {
  int a, b;
  printf("Ingrese dos números enteros positivos: ");
  scanf("%d %d", &a, &b);
  printf("El MCD de %d y %d es %d\n", a, b, mcd(a, b));
  return 0;
}
