#include <stdio.h>

const int NUM = 10;

int main() {

  int v[NUM], i;

  for(i = 0; i < NUM + 1; i++) {
    v[i] = i;
    printf("[%d] ", v[i]);
    //vai imprimir um vetor de 11 numeros (de 0 a 10)
  }
}