#include <stdio.h>
#include <stdlib.h>

// Criando a estrutura da Lista Linkada:
typedef struct NODE {
  // Devemos declarar 2 variaveis:
  // 1 - Do tipo primitivo:
  int num;
  // 2 - Do tipo 'struct pointer':
  struct NODE *prox;
} pNode;

int resp; // Variavel para o laco while()

// Criando os ponteiros 'inicio' e 'proximo' da Lista:
pNode *pInicio;
pNode *pProximo;

// Declarando todas as funcoes a serem usadas:
void Inicializando();
void PassandoElemento();
void ExibirLista();
void main();


// Funcao Principal -> Invocara as demais:
void main(int argc, char const *argv[]) {

  Inicializando();
  //PassandoElemento();
  //ExibirLista();
}

void Inicializando() {
  // Iniciando a Lista:
  pInicio = (pNode *) malloc(sizeof(pNode));

  if(pInicio == NULL) {
    exit(1);
  }
}
