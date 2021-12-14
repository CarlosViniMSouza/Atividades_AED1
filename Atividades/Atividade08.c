/*
Matrícula: 111035
Nome     : Benevaldo Pereira Gonçalves
*/

/*
Assunto: Fila Encadeada
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
// [*]  : Significa um ponteiro.
// [**] : Significa um ponteiro que aponta
//        para outro ponteiro.

void inicializar(TNO **inicio,TNO **fim);
void inserir(TNO **inicio,TNO **fim);
void remover(TNO **inicio,TNO **fim);
void removerTodos(TNO **inicio,TNO **fim);
void exibirFila(TNO *inicio);
void calcularTamanhoByteFila(TNO *inicio);
void menu();
int ObterOpcaoMenu();

// Programa Principal
int main()
{
  setlocale(LC_ALL,"Portuguese");
  menu();
}// Fim programa.

// Processa a opção selecionada no Menu
void menu(){
  int opcao;
  // Declarar os ponteiros para o
  // início e fim da fila encadeada
  TNO *inicio;
  TNO *fim;

  // Inicializar os ponteiros início e fim
  inicializar(&inicio,&fim);

  do{
   opcao = ObterOpcaoMenu();
   switch (opcao)
   {
     case 1:
       inserir(&inicio,&fim);
       break;
     case 2:
       exibirFila(inicio);
       break;
     case 3:
       remover(&inicio,&fim);
       break;
     case 4:
       removerTodos(&inicio,&fim);
       break;
     case 5:
       calcularTamanhoByteFila(inicio);
       break;
     case 6:
       // Para sair do programa deve-se
       // desalocar toda memória alocada.
       removerTodos(&inicio,&fim);
       printf("\n");
       printf("\n***************************");
       printf("\n** Programa Finalizado.  **");
       printf("\n***************************");
       printf("\n");
       break;

     default:
       printf("\n");
       printf("\n*************************");
       printf("\n** Opção Inválida....  **");
       printf("\n*************************");
       printf("\n");
   }
  }while( (opcao >= 1) && (opcao <6) );
}

// Monta o Menu e obtem a opção selecionada
int ObterOpcaoMenu(){
  int opcao;
  printf("\n");
  printf("************************************\n");
  printf("*          Fila Encadeada          *\n");
  printf("************************************\n");
  printf("*             Menu                 *\n");
  printf("************************************\n");
  printf("* [1] - Inserir                    *\n");
  printf("* [2] - Listar Fila                *\n");
  printf("* [3] - Remover                    *\n");
  printf("* [4] - Remover todos os elementos *\n");
  printf("* [5] - Tamanho em bytes da fila   *\n");
  printf("* [6] - Sair                       *\n");
  printf("************************************\n");
  printf("Entre com a opcao = ");
  scanf("%d",&opcao);
  return opcao;
}

// Inicializa uma
// Lista encadeada simples
void inicializar(TNO **inicio,TNO **fim){
 // OBS: NULL é um valor que indica
 // um endereço de memória vazio.
 *inicio = NULL;
 *fim    = NULL;
}

// Inseri um novo elemento no final da Fila
void inserir(TNO **inicio,TNO **fim){
 int elemento;
 // Declarar novo NO
 TNO* novoNO;
 // Entrada do novo elemento
 printf("Novo Elemento = ");
 scanf("%d",&elemento);
 // Alocar memória dinamicamente
 novoNO = (TNO*) malloc(sizeof(TNO));
 // Verificar SE é o primeiro
 // elemento da Fila Encadeada
 if( *inicio==NULL){
    // Primeiro elemento da fila Endadeada
    // O ponteiro do início e do fim
    // apontam para o mesmo elemento.
    novoNO->numero  = elemento; //6
    novoNO->proximo = NULL;
    *inicio = novoNO;
    *fim    = novoNO;
 }else{
    // Já existe elemento na fila,
    // inseri no fim
    novoNO->numero  = elemento; // 7,
    novoNO->proximo = NULL;
    (*fim)->proximo = novoNO;
    *fim  = novoNO;
 }
}

// Remove o primeiro elemento da Fila
void remover(TNO **inicio,TNO **fim){
 TNO * removerNO    = NULL;

 if(*inicio==NULL){
   // Fila está fazia.
   printf("\n");
   printf("\n*************************");
   printf("\n** Fila está vazia...  **");
   printf("\n*************************");
   printf("\n");
 }else{
   // Verificar SE existe apenas
   // um elemento na fila
   if (*inicio == *fim){
     // A fila só tem um elemento
     removerNO = *inicio;
     *inicio = NULL;
     *fim    = NULL;
     // Remove NO e libera memória
     free(removerNO);
   }else{
     // A fila tem mais de um elemento
     removerNO = *inicio;
     *inicio   = (*inicio)->proximo;
     // Remove NO e libera memória
     free(removerNO);
   }
 }
}

// Remove todos os elmentos da fila
void removerTodos(TNO **inicio,TNO **fim){
 TNO *remover;
 TNO *lista;

 if (inicio == NULL){
   // Fila esta vazia
   printf("\n");
   printf("\n***********************");
   printf("\n** Fila está vazia.  **");
   printf("\n***********************");
   printf("\n");
 }else{
   // Existe elemento na Fila
   // Ponteiro para navegar na Fila
   lista = *inicio;
   while(lista != NULL){
     remover = lista;
     lista   = lista->proximo;
     // Remover e desalocar memória
     free(remover);
   }
   // Reiniciar a fila
   *inicio = NULL;
   *fim    = NULL;
   printf("\n");
   printf("*************************************\n");
   printf(" Todos os elementos foram removidos. \n");
   printf("*************************************\n");
 }// if
}

// Exibe todos os elementos da fila
void exibirFila(TNO *inicio){
 // Ponteiro para navegar na Fila
 if (inicio == NULL){
   // Fila esta vazia
   printf("\n");
   printf("\n********************");
   printf("\n** Fila   vazia... **");
   printf("\n********************");
   printf("\n");
 }else{
   // Existe elemento na Fila
   printf("\n");
   printf("*****************************************************\n");
   printf("Lista todos os elementos a partir do início da Fila *\n");
   printf("*****************************************************\n");
   while(inicio != NULL){
    printf("Elemento = %d\n",inicio->numero);
    inicio = inicio->proximo;
   }
 }// if
}// exibirLista

// Calcula a quntidade de bytes alocada
// pela fila encadeada com os seus
// respectivos marcadores de início e fim
void calcularTamanhoByteFila(TNO *inicio){
 int tamPonteiroMarcador=0;
 int tamanhoByteLista=0;
 // O tamanho dos ponteiros marcadores
 // início e fim são iguais, por essa
 // razão multiplica-se por 2.
 tamPonteiroMarcador += ( sizeof(TNO) )*2;
 // Obter tamanho de bytes de todos os
 // elementos da lista
 while(inicio != NULL){
    tamanhoByteLista += sizeof(*inicio);
    inicio = inicio->proximo;
 }
 printf("\n");
 printf("************************************************\n");
 printf(" Ponteiro marcadores início e fim = %d baytes. *\n",tamPonteiroMarcador);
 printf(" A Fila Encadeada.................= %d baytes. *\n",tamanhoByteLista);
 printf(" Total ...........................= %d baytes. *\n",tamPonteiroMarcador + tamanhoByteLista);
 printf("************************************************\n");