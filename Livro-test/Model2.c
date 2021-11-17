#include <stdio.h>

int funcao(int n1, int n2) {

  printf("Soma: %d + %d = %d\n", n1, n2, n1+n2);
  printf("Sub.: %d - %d = %d\n", n1, n2, n1-n2);
  printf("Produto: %d x %d = %d\n", n1, n2, n1*n2);
  printf("Divisao: %d / %d = %f\n", n1, n2, n1/n2);
  printf("Resto da Div.: %d // %d = %f\n", n1, n2, n1%n2);
}

int main() {

  funcao(6, 10);
}