/*
Matrícula: 2021002252
Nome     : Carlos Souza
*/

/*
Assunto: Matriz

OBS:
1 - Este código foi implementado para Matriz Quadrada.
    Matriz Quadrada: quantidade de linha igual a quantidade de coluna.
    Ordem da Matriz: Indica qual é a ordem da matriz quadrada.
    Ex: Ordem 4 : Indica que a matriz quadrada possui 4 linhas e 4 colunas.
2 - O programa exemplo implementa no máxima uma Matriz
    Quadrada de Ordem 50.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Declaração de constante
// ORDEM : determina a ordem da Matriz Quadrada
const int ORDEM = 4;

// OBS: Somente para Matriz Quadrada
// Matriz Quadrada: quantidade linha igual a quantidade de coluna.
// Ordem da Matriz quantrada: indica o número de linhas e colunas.
// Ex: Matriz quadrada de ordem 4: indica uma matriz com 4 linhas e 4 colunas.

// Declaração dos Procedimentos e Funções

// Entrada de dados
void entradaDados(int matriz[ORDEM][ORDEM]);

// Saída de dados
void saidaDados(int matriz[ORDEM][ORDEM]);
void exibirDiagonalPrincipal(int matriz[ORDEM][ORDEM]);
void exibirDiagonalSecundaria(int matriz[ORDEM][ORDEM]);
// Valores dos elementos pertencentes aos Triangulo Superior e Inferior
// em relação a Diagonal Principal.
void exibirTrianguloInferior(int matriz[ORDEM][ORDEM]);
void exibirTrianguloSuperior(int matriz[ORDEM][ORDEM]);

// Executa o programa
void executarPrograma();

// Programa Principal
int main()
{
  executarPrograma();

  return 0;
}// Fim programa.


void executarPrograma(){
    // Declarar uma variável do tipo matriz de inteiros
    // Matriz quadrada : Número de linhas igual ao número de colunas
    int matriz[ORDEM][ORDEM];

    // Entrada de dados
    entradaDados(matriz);
    // Exibir dados
    saidaDados(matriz);

    // Exibir os elementos da Matriz Quadrada
    // que representam a Diagonal Principal da Matriz
    exibirDiagonalPrincipal(matriz);

    // Exibir os elementos da Matriz Quadrada
    // que representam a Diagonal Secundaria da Matriz
    exibirDiagonalSecundaria(matriz);

    // Valores dos elementos pertencentes ao Triangulo Inferior
    // em relação a Diagonal Principal da Matriz.
    exibirTrianguloInferior(matriz);

    // Valores dos elementos pertencentes ao Triangulo Superior
    // em relação a Diagonal Principal da Matriz.
    exibirTrianguloSuperior(matriz);

}

// Implementação das Funções e Procedimentos

// Retorna um registro do tipo Aluno com os dados preenchidos
void entradaDados(int matriz[ORDEM][ORDEM]){
    // Declarar indice para linha
    int linha;
    // Declarar indice para a coluna
    int coluna;

    // Fixar linha e variar a coluna
    for (linha=0;linha < ORDEM;linha++){
        for(coluna=0;coluna < ORDEM;coluna++){
          printf("Elemento[%d] [%d]:",linha,coluna);
          scanf("%d",&matriz[linha][coluna]);
        }
    }
}

//Exibe os dados de entrada e processados
void saidaDados(int matriz[ORDEM][ORDEM]){
    // Declarar indice para linha
    int linha;
    // Declarar indice para a coluna
    int coluna;

    // Fixar linha e variar a coluna
    for (linha=0;linha < ORDEM;linha++){
        printf("\n");
        for(coluna=0;coluna < ORDEM;coluna++){
          printf("[%d]  ",matriz[linha][coluna]);
        }
    }
    printf("\n");
}

void exibirDiagonalPrincipal(int matriz[ORDEM][ORDEM]){
    // Declarar indice para linha
    int linha;
    // Declarar indice para a coluna
    int coluna;
    printf("\n*******************************");
    printf("\nElementos da Diagonal Principal");
    printf("\n*******************************");
    // Fixar linha e variar a coluna
    for (linha=0;linha < ORDEM;linha++){
        printf("\n");
        for(coluna=0;coluna < ORDEM;coluna++){
          // Verificar se o elemento pertence a
          // Diagonal Principal
          if (linha == coluna){
            printf("[%d]  ",matriz[linha][coluna]);
          }
        }
    }
    printf("\n");
}

void exibirDiagonalSecundaria(int matriz[ORDEM][ORDEM]){
    // Declarar indice para linha
    int linha;
    // Declarar indice para a coluna
    int coluna;
    printf("\n*******************************");
    printf("\nElementos da Diagonal Secundaria");
    printf("\n*******************************");
    // Fixar linha e variar a coluna
    for (linha = 0;linha < ORDEM ;linha++){
        printf("\n");
        for(coluna=0;coluna < ORDEM;coluna++){
          // Verificar se o elemento pertence a
          // Diagonal Principal
          if ( (linha+coluna) == (ORDEM -1)){
            printf("[%d]  ",matriz[linha][coluna]);
          }
        }
    }
    printf("\n");
}


void exibirTrianguloInferior(int matriz[ORDEM][ORDEM]){
    // Declarar indice para linha
    int linha;
    // Declarar indice para a coluna
    int coluna;
    printf("\n***************************************************************");
    printf("\nElementos do Triangulo Inferior em relacao a Diagonal Principal");
    printf("\n***************************************************************");
    // Fixar linha e variar a coluna
    for (linha=0;linha < ORDEM;linha++){
        printf("\n");
        for(coluna=0;coluna < ORDEM;coluna++){
          // Verificar se o elemento pertence a
          // Diagonal Principal
          if (linha > coluna){
            printf("[%d]  ",matriz[linha][coluna]);
          }
        }
    }
    printf("\n");
}

void exibirTrianguloSuperior(int matriz[ORDEM][ORDEM]){
    // Declarar indice para linha
    int linha;
    // Declarar indice para a coluna
    int coluna;
    printf("\n***************************************************************");
    printf("\nElementos do Triangulo Superior em relacao a Diagonal Principal");
    printf("\n***************************************************************");
    // Fixar linha e variar a coluna
    for (linha=0;linha < ORDEM;linha++){
        printf("\n");
        for(coluna=0;coluna < ORDEM;coluna++){
          // Verificar se o elemento pertence a
          // Diagonal Principal
          if (linha < coluna){
            printf("[%d]  ",matriz[linha][coluna]);
          }
        }
    }
    printf("\n");
}