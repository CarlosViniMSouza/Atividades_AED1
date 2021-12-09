/*
Assunto: Pilha
*/

/*
OBS.: Na Pilha, o ultimo elemento a ser inserido sera o 1° a ser retirado.
Imagine uma pilha de livros, quem está no topo sera o 1° a ser removido!
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

// Criar a estrutura NO
typedef struct NO {
  // Dado do NO
  int numero;
  // Ponteiro para o próximo NO da lista
  struct NO *proximo;
} TNO; // TNO: indica um novo Tipo NO

// ATENÇÃO
// *  : Significa um ponteiro.
// ** : Significa um ponteiro que aponta para outro ponteiro.

void inicializar(TNO **inicio,TNO **fim);
void inseriFim(TNO **inicio,TNO **fim);
void inseriInicio(TNO **inicio,TNO **fim);
void removeFim(TNO **inicio,TNO **fim);
void removeInicio(TNO **inicio,TNO **fim);
void removerTodos(TNO **inicio,TNO **fim);
void exibirLista(TNO *inicio);
void calcularTamanhoByteLista(TNO *inicio);
void menu();
int ObterOpcaoMenu();

// Programa Principal
int main() {

  setlocale(LC_ALL,"Portuguese");
  menu();
}

// Processa a opção selecionada no Menu
void menu(){

  int opcao;
  // Declarar os ponteiros para o início e fim da lista encadeada simples.
  TNO *inicio;
  TNO *fim;

  // Inicializar os ponteiros início e fim
  inicializar(&inicio, &fim);

  do {

   opcao = ObterOpcaoMenu();

   switch (opcao) {

     case 1:
       inseriFim(&inicio, &fim); break;
     case 2:
       exibirLista(inicio); break;
     case 3:
       removeInicio(&inicio, &fim); break;
     case 4:
       removerTodos(&inicio,&fim); break;
     case 5:
       calcularTamanhoByteLista(inicio); break;
     case 6:
       // Para sair do programa deve-se desalocar toda memória alocada.
       removerTodos(&inicio,&fim);
       printf("\n\n***************************");
       printf("\n** Programa Finalizado.  **");
       printf("\n***************************\n");
       break;

     default:
       printf("\n\n*************************");
       printf("\n** Opção Inválida....  **");
       printf("\n*************************\n");
   }

  } while((opcao >= 1) && (opcao < 8));
}

// Monta o Menu e obtem a opção selecionada
int ObterOpcaoMenu() {

  int opcao;

  printf("\n");
  printf("************************************\n");
  printf("*          Fila Encadeada          *\n");
  printf("************************************\n");
  printf("*              Menu                *\n");
  printf("************************************\n");
  printf("* [1] - Inserir no fim             *\n");
  printf("* [2] - Listar elementos           *\n");
  printf("* [3] - Remover primeiro elemento  *\n");
  printf("* [4] - Remover todos os elementos *\n");
  printf("* [5] - Tamanho em bytes da lista  *\n");
  printf("* [6] - Sair                       *\n");
  printf("************************************\n");

  printf("Entre com a opcao = ");
  scanf("%d", &opcao);

  return opcao;
}

// Inicializa uma Lista Encadeada Simples:
void inicializar(TNO **inicio, TNO **fim) {

  // OBS: NULL é um valor que indica um endereço de memória vazio.
  *inicio = NULL;
  *fim    = NULL;
}

// Inseri um novo elemento no final da Lista:
void inseriFim(TNO **inicio, TNO **fim) {

  int elemento;

  // Declarar 1 novo NO
  TNO* novoNO;

  // Entrada do novo elemento
  printf("Novo Elemento = ");
  scanf("%d",&elemento);

  // Alocar memória dinamicamente
  novoNO = (TNO*) malloc(sizeof(TNO));

  // Verificar SE é o 1° elemento da Lista Encadeada Simples:
  if(*inicio == NULL){

    // Primeiro elemento da Lista Endadeada, o ponteiro do início e do fim apontam para o mesmo elemento.
    novoNO -> numero  = elemento; //6
    novoNO -> proximo = NULL;
    *inicio = novoNO;
    *fim    = novoNO;
  } else {

    // Já existe elemento na lista, inserir no fim:
    novoNO -> numero  = elemento; // 7,
    novoNO -> proximo = NULL;
    (*fim) -> proximo = novoNO;
    *fim  = novoNO;
  }
}

// Remove o primeiro elemento da Lista
void removeInicio(TNO **inicio, TNO **fim) {

  TNO *removerNO = NULL;

  if(*inicio == NULL){

    // Lista está fazia.
    printf("\n\n*************************");
    printf("\n** Lista está vazia... **");
    printf("\n*************************\n");
  } else {

   // Verificar SE existe apenas um elemento na lista
   if (*inicio == *fim) {

      // A lista só tem um elemento
      removerNO = *inicio;
      *inicio = NULL;
      *fim    = NULL;

      // Remove NO e libera memória
      free(removerNO);
    } else {

     // A lista tem mais de um elemento
     removerNO = *inicio;
     *inicio   = (*inicio)->proximo;

     // Remove NO e libera memória
     free(removerNO);
    }
  }
}

// Remove todos os elmentos da lista
void removerTodos(TNO **inicio, TNO **fim){

 TNO *remover;
 TNO *lista;

 if(inicio == NULL) {

    // Lista esta vazia
    printf("\n\n***********************");
    printf("\n** Lista está vazia. **");
    printf("\n***********************\n");
  } else {

    // Existe elemento Ponteiro na Lista para navegar
    lista = *inicio;

    while(lista != NULL) {

      remover = lista;
      lista   = lista -> proximo;

      // Remover e desalocar memória
      free(remover);
    }

   // Reiniciar a lista
   *inicio = NULL;
   *fim    = NULL;

   printf("\n*************************************\n");
   printf("* Todos os elementos foram removidos. *\n");
   printf("*************************************\n");
  }
}

// Exibe todos os elementos da lista
void exibirLista(TNO *inicio) {

  // Ponteiro para navegar na Lista
  if(inicio == NULL) {

    // Lista esta vazia
    printf("\n\n********************");
    printf("\n**   ListaVazia   **");
    printf("\n********************\n");
  } else {

    // Existe elemento na Lista
    printf("\n*****************************************************\n");
    printf("Listar Todos os Elementos a partir do início da Lista \n");
    printf("*****************************************************\n");

    while(inicio != NULL) {
      printf("Elemento = %d\n",inicio -> numero);
      inicio = inicio -> proximo;
    }
  }
}

// Calcula a qtd de bytes alocada pela lista encadeada com os seus respectivos marcadores de início e fim
void calcularTamanhoByteLista(TNO *inicio) {

  int tamPonteiroMarcador=0;
  int tamanhoByteLista=0;

  // O tamanho dos ponteiros marcadores início e fim são iguais, por essa razão multiplica-se por 2.
  tamPonteiroMarcador += (sizeof(TNO))*2;

  // Obter tamanho de bytes de todos os elementos da lista
  while(inicio != NULL) {

    tamanhoByteLista += sizeof(*inicio);
    inicio = inicio->proximo;
  }

  printf("\n************************************************\n");
  printf(" Ponteiro marcadores inicio e fim = %d bytes. *\n", tamPonteiroMarcador);
  printf(" A Lista Encadeada................= %d bytes. *\n", tamanhoByteLista);
  printf(" Total ...........................= %d bytes. *\n", tamPonteiroMarcador + tamanhoByteLista);
  printf("************************************************\n");
}
