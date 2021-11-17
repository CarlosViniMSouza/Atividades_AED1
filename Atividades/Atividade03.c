/*
Matrícula: 111035
Nome     : Benevaldo Pereira Gonçalves
*/

/*

Assunto: Modularização

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

// Implementação das Funções e Procedimentos

// Retorna um registro do tipo Aluno com os dados preenchidos
RegistroAluno entradaDados(RegistroAluno aluno) {

    printf("Entrada de Dados\n");
    printf("********************************\n");

    // Matricula do aluno
    printf("Matricula: ");
    scanf("%lf", &aluno.matricula);
    fflush (stdin); //Limpar o buffer do teclado

    // Nome do aluno
    printf("Nome: ");
    scanf("%[^\n]", aluno.nome);
    fflush (stdin); //Limpar o buffer do teclado

    // Idade do aluno
    printf("Idade: ");
    scanf("%d", &aluno.idade);
    fflush (stdin); //Limpar o buffer do teclado

    // Sexo do aluno
    printf("Sexo (M/F): ");
    scanf("%c", &aluno.sexo);
    fflush (stdin);//Limpar o buffer do teclado


    // Notas 1, 2 e 3
    printf("Nota 01: ");
    scanf("%f", &aluno.nota1);
    fflush (stdin);//Limpar o buffer do teclado

    printf("Nota 02: ");
    scanf("%f", &aluno.nota2);
    fflush (stdin);//Limpar o buffer do teclado

    printf("Nota 03: ");
    scanf("%f", &aluno.nota3);
    fflush (stdin);//Limpar o buffer do teclado

    return aluno;
}

// Calcula e retorna a média
float calcularMedia(float nota1, float nota2, float nota3){

    //return (nota1+nota2+nota3) /3;
    return ((nota1 * 1) + (nota2 * 2) + (nota3 * 3))/6;
}

//Exibe os dados de entrada e processados
void saidaDados(RegistroAluno aluno){

    // Saída de dados:
    printf("\nSaida de Dados\n");
    printf("********************************\n");
    printf("Matricula = %.0lf\n",aluno.matricula);
    printf("Nome      = %s\n",aluno.nome);
    printf("Idade     = %d\n",aluno.idade);
    printf("Sexo(M/F) = %c\n",aluno.sexo);
    printf("Nota 01   = %.2f\n",aluno.nota1);
    printf("Nota 02   = %.2f\n",aluno.nota2);
    printf("Nota 03   = %.2f\n",aluno.nota3);
    printf("Media     = %.2f\n",aluno.media);
    printf("Situacao  = %s\n",aluno.situacao);
}

// Programa Principal
int main()
{
    // Declara uma variável do tipo Registro: RegistroAluno
    RegistroAluno aluno;

    // Entrada de dados:
    aluno = entradaDados(aluno);

    // Calcular a média
    aluno.media = calcularMedia(aluno.nota1, aluno.nota2, aluno.nota3);

    // Definir a situação do Aluno: APROVADO ou REPROVADO
    if (aluno.media >= 6.0) {

        // Atribuir a string APROVADO a variável situacao
        strcpy(aluno.situacao, "APROVADO");
    } else {

        // Atribuir a string REPROVADO a variável situacao
        strcpy(aluno.situacao, "REPROVADO");
    }
    // Exibir dados
    saidaDados(aluno);
}