#include <stdio.h>

int construirMatrizes() {

  int matrizA[3][3];
  int matrizB[3][3];

  for(int x = 0; x < 3; ++x) {
    for(int y = 0; y < 3; ++y) {
      printf("Digite o numero da posicao A[%d][%d]: ", x, y);
      scanf("%d ", &matrizA[x][y]);
    }
    printf("\n");
  }

  for(int x = 0; x < 3; ++x) {
    for(int y = 0; y < 3; ++y) {
      printf("Digite o numero da posicao B[%d][%d]: ", x, y);
      scanf("%d ", &matrizB[x][y]);
    }
    printf("\n");
  }

  printf("Voce digitou as matrizes: ");

  printf("\n\nMatriz A: \n");

  for(int x = 0; x < 3; ++x) {
    for(int y = 0; y < 3; ++y) {
      printf("[%d]", &matrizA[x][y]);
    }
    printf("\n");
  }

  printf("\n\nMatriz B: \n");

  for(int x = 0; x < 3; ++x) {
    for(int y = 0; y < 3; ++y) {
      printf("[%d]", &matrizB[x][y]);
    }
    printf("\n");
  }

}

int main() {

  construirMatrizes();
}