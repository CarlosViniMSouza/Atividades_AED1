/*
Matrícula: 111035
Nome     : Benevaldo Pereira Gonçalves
*/

/*

[1] - Assunto: Vetor
Um  vetor,  ou arranjo (= array), é uma estrutura de dados que
armazena uma sequência de objetos (dados), todos do mesmo
tipo unidimensional com tamanho de elementos definido
(alocação estática de memória), em posições consecutivas da memória
RAM (= random access memory) do computador.  Essa estrutura permite
acesso aleatório: qualquer elemento do vetor pode ser alcançado
diretamente, sem passar pelos elementos anteriores.

[2] - Cada posição de um elemento em um Vetor é determinado
por um índice que inicia-se a partir de valor 0 (zero).

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

// Entrada de dados
RegistroAluno entradaDados(RegistroAluno aluno);

// Processa os dados de entrada
RegistroAluno processarDados(RegistroAluno aluno);

// Calcular a média
float calcularMedia(float nota1,float nota2,float nota3);

// Saída de dados
void saidaDados(RegistroAluno VetorAluno[]);

// Executa o programa
void executarPrograma();


// Programa Principal
int main()
{
  executarPrograma();
}// Fim programa.


void executarPrograma(){
    // Declatar uma variável do tipo vetor chamada vetorAluno[]
    // para tres elementos do tipo RegistroAluno
    RegistroAluno vetorAluno[3];  // indice i = 0, i=1, i=2


    int i;  // Representa o índice do vetor
    RegistroAluno aluno;

    // Obter e processar dados de 5 alunos
    // indice i = 0, i=1, i=2
    for (i=0;i<3;i++){
        // Entrada de dados:
        aluno = entradaDados(aluno);
        // Processar dados
        aluno = processarDados(aluno);
        // Adiciona o dados lido da variavel aluno no vetor:vetorAluno
        vetorAluno[i] = aluno;
    }
   // Exibir dados
   saidaDados(vetorAluno);
}


// Implementação das Funções e Procedimentos


// Retorna um registro do tipo Aluno com os dados preenchidos
RegistroAluno entradaDados(RegistroAluno aluno){

    printf("Entrada de Dados\n");
    printf("********************************\n");

    // Matricula do aluno
    printf("Matricula: ");
    scanf("%lf",&aluno.matricula);
    fflush (stdin); //Limpar o buffer do teclado
    // Nome do aluno
    printf("Nome: ");
    scanf("%[^\n]",aluno.nome);
    fflush (stdin); //Limpar o buffer do teclado
    printf("Idade: ");
    scanf("%d",&aluno.idade);
    fflush (stdin); //Limpar o buffer do teclado
    // Sexo do aluno
    printf("Sexo (M/F): ");
    scanf("%c",&aluno.sexo);
    fflush (stdin);//Limpar o buffer do teclado
    // Notas 1, 2 e 3
    printf("Nota 01: ");
    scanf("%f",&aluno.nota1);
    fflush (stdin);//Limpar o buffer do teclado
    printf("Nota 02: ");
    scanf("%f",&aluno.nota2);
    fflush (stdin);//Limpar o buffer do teclado
    printf("Nota 03: ");
    scanf("%f",&aluno.nota3);
    fflush (stdin);//Limpar o buffer do teclado

    return aluno;
}

// Processa dados: cálculo da média e definição da Situação: Aprovado ou reprovado
RegistroAluno processarDados(RegistroAluno aluno){

    // Calcular a média
    aluno.media = calcularMedia(aluno.nota1, aluno.nota2, aluno.nota3);

    // Definir a situação do Aluno: APROVADO ou REPROVADO
    if (aluno.media >= 6.0)
    {
        // Atribuir a string APROVADO a variável situacao
        strcpy( aluno.situacao, "APROVADO");
    }
    else
    {
        // Atribuir a string REPROVADO a variável situacao
        strcpy( aluno.situacao, "REPROVADO");

    }

    return aluno;

}



//Exibe os dados de entrada e processados
void saidaDados(RegistroAluno VetorAluno[]){
    int i; // Representa o índice do vetor
    // Saída de dados:

    for (i=0;i<3;i++){
        printf("\nSaida de Dados\n");
        printf("********************************\n");
        printf("Matricula = %.0lf\n",VetorAluno[i].matricula);
        printf("Nome      = %s\n",VetorAluno[i].nome);
        printf("Idade     = %d\n",VetorAluno[i].idade);
        printf("Sexo(M/F) = %c\n",VetorAluno[i].sexo);
        printf("Nota 01   = %.2f\n",VetorAluno[i].nota1);
        printf("Nota 02   = %.2f\n",VetorAluno[i].nota2);
        printf("Nota 03   = %.2f\n",VetorAluno[i].nota3);
        printf("Media     = %.2f\n",VetorAluno[i].media);
        printf("Situacao  = %s\n",VetorAluno[i].situacao);
    }

}


// Calcula e retorna a média
float calcularMedia(float nota1,float nota2,float nota3){

 // Média aritimética
 //return (nota1+nota2+nota3) /3;

 // Média Ponderada
 return ( (nota1 * 1) + (nota2 * 2) + (nota3 * 3) ) / 6;

}
