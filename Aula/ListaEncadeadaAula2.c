#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct NO {
  // No -> Divide-se em 2 partes:
  // Parte 1 : Contem a informação
  // Parte 2 : Contem o ponteiro
  // Dado do No
  int numero;

  //Ponteiro que indicara o prox. No da lista.
  struct NO *proximo;
} TLista //Indica um Tipo Lista Encadeada;

TLista* inicializar();
TLista* inserir(TLista * lista);

int main() {

}