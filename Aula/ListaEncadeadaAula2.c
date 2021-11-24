#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct NO {
  // No -> Divide-se em 2 partes:
  // Parte 1 : Contem a informação
  // Parte 2 : Contem o ponteiro
  // Dado do No
  int numero;

  //Ponteiro que indicara o prox. No da lista.
  struct NO *proximo;
} TLista; //Indica um Tipo Lista Encadeada;

TLista* inicializar();
TLista* inserir(TLista* lista);
TLista* inserirFim(TLista* lista, int elemento);
void exibirLista(TLista* lista);

int main() {

  int i, quantidade;

  //Cria um apontador do tipo 'No'
  TLista *lista;

  //O apontador sera denominado 'lista'
  lista = inicializar();

  //Retorna o endereco do ultimo elemento inserido na lista.
  lista = inserir(lista);

  //exibirLista(lista);
}

// Cria e Inicializa uma Lista Encadeada Simples.
TLista* inicializar() {

  //NULL : endereco de memoria vazio.
  return NULL;
}

TLista* inserir(TLista* lista) {

  int i, elemento, quantidade;

  printf("Entre com a quant. de elementos que precisas: ");
  scanf("%d", &quantidade);
  
  for(i = 0; i < quantidade; i++) {

    printf("Digite um novo elemento = ");
    scanf("%d", &elemento);

    lista = inserirFim(lista, elemento);
  }

  return lista;
}

TLista* inserirFim(TLista* lista, int elemento) {
  
  TLista* novoNO;
  novoNO = (TLista*) malloc(sizeof(TLista));

  novoNO -> numero = elemento;
  novoNO -> proximo = lista;

  return novoNO;
}