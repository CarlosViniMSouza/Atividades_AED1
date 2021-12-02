#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {

  // As variaveis do tipo 'conteudo':
  int x, y;

  // A variavel do tipo ponteiro:
  struct ponto *proximo;

} t_ponto;

int main() {

  // criando as variaveis do tipo 'ponteiro' para fazer a lincagem dos elementos na lista:
  t_ponto * ini_ponto;
  t_ponto * prox_ponto;

  int resp; // Uma variavel extra que precisaremos para manter o while()

  // Inicializando a lista vazia:
  ini_ponto = (t_ponto *)malloc(sizeof(t_ponto));

  if(ini_ponto == NULL) {
    exit(1);
  }

  // Passando um elemento para a lista:
  prox_ponto = ini_ponto;

  // O loop para inserirmos quantos elementos forem necessarios:
  while (1) {
    
    printf("Digite o valor de X: ");
    scanf("%d", &prox_ponto -> x);
    printf("Digite o valor de Y: ");
    scanf("%d", &prox_ponto -> y);
    printf("Queres continuar? 1 <SIM> | Outro valor <NAO>: ");
    scanf("%d", &resp);

    if(resp == 1) {

      // Aqui, a ideia eh alocar os novos elementos no comeco da lista:
      prox_ponto -> proximo = (t_ponto *)malloc(sizeof(t_ponto));
      prox_ponto = prox_ponto -> proximo;
    } else {
      break;
    }
  }

  // Encerrando a lista
  printf("\n");
  prox_ponto -> proximo = NULL;
  prox_ponto = ini_ponto;

  // Exibimos a lista quando encerramos a operacao de insercao:
  while(prox_ponto != NULL) {
    printf("\ncoordenada (X,Y): (%d, %d)", prox_ponto -> x, prox_ponto -> y);
    prox_ponto = prox_ponto -> proximo;
  }

  return 0;
}