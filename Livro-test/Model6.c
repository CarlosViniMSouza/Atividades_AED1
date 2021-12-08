#include <stdio.h>
#include <stdlib.h>

// Criando a estrutura da Lista Linkada:
typedef struct Node {
  // Devemos declarar 2 variaveis:
  // 1 - Do tipo primitivo:
  int num;
  // 2 - Do tipo 'struct pointer':
  struct Node *prox;
} pNode;

int resp; // Variavel para o laco while()
int num; // Variavel para passar os novos numeros na Lista

// Criando os ponteiros 'inicio' e 'proximo' da Lista:
pNode *pInicio;
pNode *pProximo;

// Declarando todas as funcoes a serem usadas:
void Inicializando();
void PassandoElemento();
void ExibirLista();


// Funcao Principal -> Invocara as demais:
void main(int argc, char const *argv[]) {

  Inicializando();
  PassandoElemento();
  ExibirLista();
}

void Inicializando() {
  // Iniciando a Lista:
  pInicio = (pNode *) malloc(sizeof(pNode));

  if(pInicio == NULL) {

    exit(1);
  }
}

void PassandoElemento() {
  // Passando um elemento para a lista:
  pProximo = pInicio;

  // O loop que usaremos para inserir 'N' elementos:
  while (1) {

    printf("Digite algum valor inteiro: ");
    scanf("%d", &pProximo -> num);
    printf("Queres continuar? \n<SIM> : 1 | <NAO> : 0 =\n");
    scanf("%d", &resp);

    if(resp == 1) {
      // Aqui, a ideia eh alocar os novos elementos no comeco da lista:
      pProximo -> prox = (pNode *) malloc(sizeof(pNode));
      pProximo = pProximo -> prox;
    } else {
      break;
    }
  }

  // Por fim, o trecho que fecha a lista:
  pProximo -> prox = NULL;
  pProximo = pInicio;
}

void ExibirLista() {
  // Agora, basta apresentarmos os elementos:
  printf("A lista: \n");
  while (pProximo != NULL) {
    printf("\n %d", pProximo -> num);
    pProximo = pProximo -> prox;
  }
}
