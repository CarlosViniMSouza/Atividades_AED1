#include <stdio.h>

int main() {

  int x = 5, *Px = &x;
  float y = 5.0, *Py = &y;

  printf("Endereco de %d: %ld\n", x, Px);
  printf("Proximo Endereco de %d: %ld\n", x, (Px + 1));

  printf("Endereco de %.2f: %ld\n", y, Py);
  printf("Proximo Endereco de %.2f: %ld\n", y, (Py + 1));

  printf("\n(Em Hexadecimal) Endereco de %d: %x", x, Px);
  printf("\n(Em Hexadecimal) Proximo Endereco de %d: %x", x, (Px + 1));

  printf("\n(Em Hexadecimal) Endereco de %.2f: %x", y, Py);
  printf("\n(Em Hexadecimal) Proximo Endereco de %.2f: %x", y, (Py + 1));
}