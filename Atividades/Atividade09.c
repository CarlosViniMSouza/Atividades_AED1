/*
Matrícula: 111035
Nome     : Benevaldo Pereira Gonçalves
*/

/*
Assunto: Pilha Encadeada
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

void inicializar(TNO **topo);
void inserir(TNO **topo);
void remover(TNO **topo);
void removerTodos(TNO **topo);
void exibirPilha(TNO *topo);
void calcularTamanhoBytePilha(TNO *topo);
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
  // topo da pilha
  TNO *topo;

  // Inicializar o ponteiro topo
  inicializar(&topo);

  do{
   opcao = ObterOpcaoMenu();
   switch (opcao)
   {
     case 1:
       inserir(&topo);
       break;
     case 2:
       exibirPilha(topo);
       break;
     case 3:
       remover(&topo);
       break;
     case 4:
       removerTodos(&topo);
       break;
     case 5:
       calcularTamanhoBytePilha(topo);
       break;
     case 6:
       // Para sair do programa deve-se
       // desalocar toda memória alocada.
       removerTodos(&topo);
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
  printf("*          Pilha Encadeada         *\n");
  printf("************************************\n");
  printf("*             Menu                 *\n");
  printf("************************************\n");
  printf("* [1] - Inserir                    *\n");
  printf("* [2] - Listar Pilha               *\n");
  printf("* [3] - Remover                    *\n");
  printf("* [4] - Remover todos os elementos *\n");
  printf("* [5] - Tamanho em bytes da pilha  *\n");
  printf("* [6] - Sair                       *\n");
  printf("************************************\n");
  printf("Entre com a opcao = ");
  scanf("%d",&opcao);
  return opcao;
}

// Inicializa uma
// Pilha encadeada simples
void inicializar(TNO **topo){
 // OBS: NULL é um valor que indica
 // um endereço de memória vazio.
 *topo = NULL;
}

// Inseri um novo elemento no topo da pilha
void inserir(TNO **topo){
 int elemento;
 // Declarar novo NO
 TNO* novoNO;
 // Entrada do novo elemento
 printf("Novo Elemento = ");
 scanf("%d",&elemento);
 // Alocar memória dinamicamente
 novoNO = (TNO*) malloc(sizeof(TNO));
 // Verificar SE é o primeiro
 // elemento da Pilha Encadeada
 if( *topo==NULL){
    // Primeiro elemento da Pilha Endadeada
    novoNO->numero  = elemento;
    novoNO->proximo = NULL;
    *topo = novoNO;
 }else{
    // Já existe elemento na pilha,
    // inseri no topo da pilha
    novoNO->numero  = elemento;
    novoNO->proximo = *topo;
    *topo = novoNO;
 }
}

// Remove o primeiro elemento do topo da pilha
void remover(TNO **topo){
 TNO * removerNO    = NULL;

 if(*topo==NULL){
   // Pilha está fazia.
   printf("\n");
   printf("\n*************************");
   printf("\n** Pilha está vazia... **");
   printf("\n*************************");
   printf("\n");
 }else{
   // Verificar SE existe apenas
   // um elemento na pilha
   if ((*topo)->proximo == NULL){
     // A pilha só tem um elemento
     removerNO = *topo;
     *topo = NULL;
     // Remove NO e libera memória
     free(removerNO);
   }else{
     // A pilha tem mais de um elemento
     removerNO = *topo;
     *topo   = (*topo)->proximo;
     // Remove NO e libera memória
     free(removerNO);
   }
 }
}

// Remove todos os elmentos da pilha
void removerTodos(TNO **topo){
 TNO *remover;
 TNO *pilha;

 if (topo == NULL){
   // Pilha esta vazia
   printf("\n");
   printf("\n***********************");
   printf("\n** Pilha está vazia.  **");
   printf("\n***********************");
   printf("\n");
 }else{
   // Existe elemento na Pilha
   // Ponteiro para navegar na Pilha
   pilha = *topo;
   while(pilha != NULL){
     remover = pilha;
     pilha   = pilha->proximo;
     // Remover e desalocar memória
     free(remover);
   }
   // Reiniciar a pilha
   *topo = NULL;
   printf("\n");
   printf("*************************************\n");
   printf(" Todos os elementos foram removidos. \n");
   printf("*************************************\n");
 }// if
}

// Exibe todos os elementos da pilha
void exibirPilha(TNO *topo){
 // Ponteiro para navegar na Pilha
 if (topo == NULL){
   // Pilha esta vazia
   printf("\n");
   printf("\n********************");
   printf("\n** Pilha  vazia... **");
   printf("\n********************");
   printf("\n");
 }else{
   // Existe elemento na Pilha
   printf("\n");
   printf("*****************************************************\n");
   printf("Lista todos os elementos a partir do início da Pilha*\n");
   printf("*****************************************************\n");
   while(topo != NULL){
    printf("Elemento = %d\n",topo->numero);
    topo = topo->proximo;
   }
 }// if
}// exibirLista

// Calcula a quntidade de bytes alocada
// pela pilha encadeada com o seu
// respectivo marcador do topo
void calcularTamanhoBytePilha(TNO *topo){
 int tamPonteiroMarcador=0;
 int tamanhoBytePilha=0;
 // O tamanho do ponteiro topo
 tamPonteiroMarcador +=  sizeof(TNO) ;
 // Obter tamanho de bytes de todos os
 // elementos da pilha
 while(topo != NULL){
    tamanhoBytePilha += sizeof(*topo);
    topo = topo->proximo;
 }
 printf("\n");
 printf("************************************************\n");
 printf(" Ponteiro marcador topo = %d baytes. *\n",tamPonteiroMarcador);
 printf(" A Fila Encadeada.......= %d baytes. *\n",tamanhoBytePilha);
 printf(" Total .................= %d baytes. *\n",tamPonteiroMarcador + tamanhoBytePilha);
 printf("************************************************\n");
 
}