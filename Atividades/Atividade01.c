#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>



// Programa Principal
int main()
{

// Declaração de variáveis
    char nome[100];    // Nome do aluno com no máximo 100 caracteres
    double matricula;  // Matrícula do Aluno
    int idade;         // Idade do Aluno
    char sexo;         // M (masculino) ou F (feminino)
    float nota1;       // Nota 1
    float nota2;       // Nota 2
    float nota3;       // Nota 3
    float media;       // Media das provas dos candidatos. Determina a pontuacao final do candidato
    char situacao[10]; // APROVADO, REPROVADO

    // Entrada de dados:
    printf("Entrada de Dados\n");
    printf("********************************\n");

    // Matricula do aluno
    printf("Matricula: ");
    scanf("%lf",&matricula);
    fflush(stdin); //Limpar o buffer do teclado

    // Nome do aluno
    printf("Nome: ");
    scanf("%[^\n]",nome);
    fflush(stdin); //Limpar o buffer do teclado

    printf("Idade: ");
    scanf("%d",&idade);
    fflush(stdin); //Limpar o buffer do teclado

    // Sexo do aluno
    printf("Sexo (M/F): ");
    scanf("%c",&sexo);
    fflush(stdin);//Limpar o buffer do teclado


    // Notas 1, 2 e 3
    printf("Nota 01: ");
    scanf("%f",&nota1);
    fflush(stdin);//Limpar o buffer do teclado

    printf("Nota 02: ");
    scanf("%f",&nota2);
    fflush(stdin);//Limpar o buffer do teclado

    printf("Nota 03: ");
    scanf("%f",&nota3);
    fflush(stdin);//Limpar o buffer do teclado

    // Calcular a média
    media = (float) (nota1+nota2+nota3) / 3;

    // Definir a situação do Aluno: APROVADO ou REPROVADO
    if (media >= 6.0)
    {

        // Atribuir a string APROVADO a variável situacao
        strcpy( situacao, "APROVADO");
    } else {

        // Atribuir a string REPROVADO a variável situacao
        strcpy( situacao, "REPROVADO");
    }

    // Saída de dados:
    printf("\nSaida de Dados\n");
    printf("********************************\n");
    printf("Matricula = %.0lf\n",matricula);
    printf("Nome      = %s\n",nome);
    printf("Idade     = %d\n",idade);
    printf("Sexo(M/F) = %c\n",sexo);
    printf("Nota 01   = %.2f\n",nota1);
    printf("Nota 02   = %.2f\n",nota2);
    printf("Nota 03   = %.2f\n",nota3);
    printf("Media     = %.2f\n",media);
    printf("Situacao  = %s\n",situacao);

}