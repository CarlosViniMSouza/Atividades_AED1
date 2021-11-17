/*
Matrícula: 111035
Nome     : Benevaldo Pereira Gonçalves
*/

/*
Assunto: Variáveis e Endereço de Memória em C.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


// Definir uma nova estrutura de dados: Registros
// typedef struct : Permite a criação de uma NOVA ESTRUTURA DE DADOS chamado REGISTRO.
typedef struct {
    // Declaração de variáveis: Membros do registro
    char nome[100];    // Nome do aluno com no máximo 100 caracteres
    double matricula;  // Matrícula do Aluno
    int idade;         // Idade do Aluno
    char sexo;         // M (masculino) ou F (feminino)
    float nota1;       // Nota 1
    float nota2;       // Nota 2
    float nota3;       // Nota 3
    float media;       // Media das provas dos candidatos. Determina a pontuacao final do candidato
    char situacao[10]; // APROVADO, REPROVADO
} RegistroAluno; // RegistroAluno: Nome do registro


// Declaração dos Procedimentos e Funções
// Executa o programa
void executarPrograma();

// Programa Principal
int main()
{
  executarPrograma();
}// Fim programa.

void executarPrograma(){
    // Declaração de variáveis Primitivas em C
    char string[10];
    char caracter;
    int inteiro;
    float real;
    double dobroReal;
    // Declaração de Registro
    RegistroAluno aluno;
    // Declaração de Vetor de registro
    RegistroAluno vetorAluno[10];


    // Exibir o tamanho e o Endereço
    // de Memória das variáveis
    // ATENÇÃO:
    // (1) - Para obter o Endereço de Memória de uma variável
    //       em C, utiliza-se o caracter &.
    //       Ex: Para obter o endereço da variável string: &string.
    //
    // (2) - A função sizeof() retorna o tamanho da variável em bytes.
    //
    // (3) - A formatação %x no printf(), formata o endereço
    //       de memória da variável em em Hexadecimal.
    printf("Tamanho da String com 10 caracteres: %d byte(s)   - Endereco Inicial de Memoria: %x \n",sizeof(string),&string);
    printf("Tamanho do Caracter ...............: %d byte(s)    - Endereco Inicial de Memoria: %x \n",sizeof(caracter),&caracter);
    printf("Tamanho do Inteiro ................: %d byte(s)    - Endereco Inicial de Memoria: %x \n",sizeof(inteiro),&inteiro);
    printf("Tamanho do Real ...................: %d byte(s)    - Endereco Inicial de Memoria: %x \n",sizeof(real),&real);
    printf("Tamanho do Dobro do Real ..........: %d byte(s)    - Endereco Inicial de Memoria: %x \n",sizeof(dobroReal),&dobroReal);
    printf("Tamanho do Registro Aluno .........: %d byte(s)  - Endereco Inicial de Memoria: %x \n",sizeof(aluno),&aluno);
    printf("Tamanho do Vetor[40] Alunos .......: %d byte(s) - Endereco Inicial de Memoria: %x \n",sizeof(vetorAluno),&vetorAluno);
}