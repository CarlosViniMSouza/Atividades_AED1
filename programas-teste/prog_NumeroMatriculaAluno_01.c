/*
 * Matrícula: 2021002252
 * Discente: Carlos Vinicius Monteiro de Souza
 */
#include <stdio.h>
#include <string.h>

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



int Q1() {

    RegistroAluno aluno;
    int i;
    int quantApro = 0;
    int quantRepro = 0;

    // Entrada de dados:

    //Loop que repetira esse processo 5 vezes:
    for(i = 1; i <= 5; i++) {
        // Matricula do aluno
        printf("Entrada de Dados\n");
        printf("********************************\n");

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

        // Calcular a média
        aluno.media = (float) (aluno.nota1+aluno.nota2+aluno.nota3) / 3;

        // Definir a situação do Aluno: APROVADO ou REPROVADO
        if (aluno.media >= 6.0)
        {
            // Atribuir a string APROVADO a variável situacao
            strcpy( aluno.situacao, "APROVADO");
            quantApro += 1;
        }
        else
        {
            // Atribuir a string REPROVADO a variável situacao
            strcpy( aluno.situacao, "REPROVADO");
            quantRepro += 1;

        }

        // Saída de dados:
        printf("\nSaida de Dados\n");
        printf("********************************\n");
        printf("Media     = %.2f\n", aluno.media);
        printf("Situacao  = %s\n", aluno.situacao);
        printf("Aprovados = %d\n", quantApro);
        printf("Reprovados = %d\n", quantRepro);
        printf("\n\n");
    }

    return 0;
}// Fim programa.