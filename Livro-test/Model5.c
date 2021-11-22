#include <stdio.h>

int x, *Px = &x;
float y, *Py = &y;

void InserirNumeros() {

  printf("Insira um numero (do tipo inteiro): ");
  scanf("%d", &x);

  printf("Insira um numero (do tipo float): ");
  scanf("%f", &y);

  printf("Endereco de %d: %ld\n", x, Px);
  printf("Proximo Endereco de %d: %ld\n", x, (Px + 1));

  printf("Endereco de %.2f: %ld\n", y, Py);
  printf("Proximo Endereco de %.2f: %ld\n", y, (Py + 1));

  printf("\n(Em Hexadecimal) Endereco de %d: %x", x, Px);
  printf("\n(Em Hexadecimal) Proximo Endereco de %d: %x", x, (Px + 1));

  printf("\n(Em Hexadecimal) Endereco de %.2f: %x", y, Py);
  printf("\n(Em Hexadecimal) Proximo Endereco de %.2f: %x", y, (Py + 1));
}

int main() {

  InserirNumeros();
}