#include <stdio.h>

void obterDados(int *v1, int *v2);
void trocarDados(int *v1, int *v2);

int main() {

  int Valor1, Valor2;

  obterDados(&Valor1, &Valor2);
  trocarDados(&Valor1, &Valor2);
}

void obterDados(int *v1, int *v2) {

  printf("Digite o primeiro valor = ");
  scanf("%d", v1);
  printf("Digite o segundo valor = ");
  scanf("%d", v2);
}

void trocarDados(int *v1, int *v2) {

  int *aux;
  int *pont;
  aux = v1;
  v1 = v2;
  v2 = aux;

  printf("Primeiro Valor (trocado) (conteudo): %d\n", *v1);
  printf("Segundo Valor (trocado) (conteudo): %d\n", *v2);
  printf("Primeiro Valor (trocado) (endereco): %d\n", v1);
  printf("Segundo Valor (trocado) (endereco): %d\n", v2);
  printf("Seu Endereco de memoria: %x\n", pont);
  // %x --> representaçao em hexadecimal.
}