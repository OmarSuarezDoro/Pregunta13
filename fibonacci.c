#include <stdio.h>

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  int n = 10;
  printf("El %d-ésimo número de la secuencia de Fibonacci es %d\n", n, fibonacci(n));
  return 0;
}
