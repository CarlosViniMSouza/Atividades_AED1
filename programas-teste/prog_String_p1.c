#include <stdio.h>
#include <string.h>

main() {

  char s[100];
  char *ptr = s; // Apontara p/ 1@ caractere de s[100]

  printf("Digite o que quiser: ");
  gets(s);

  if(*ptr == '\0') return;
  /* Retorna 0 caso ocorra erro na compilação! */

  /* P/ imprimir a String normalmente */
  while(*ptr != '\0') {

    putchar(*ptr++);
    ptr++;
  }

  /* Imprimir string inversa: */
  ptr--;

  while(ptr >= s) {

    putchar(*ptr--);
  }

}