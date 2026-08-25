/*
Escreva um programa C para criar uma estrutura Aluno contendo os membros matrícula (inteiro) e nota (real).
Crie um vetor de alunos de tamanho 10. Preencha o vetor com números de matrícula sequenciais de 1 a 10 e notas
informadas pelo usuário.  Apresente na tela o nome e a nota de cada aluno.
*/

#include "stdio.h"
#include "stdlib.h"

struct Alunos
{
    int matricula;
    float nota;
};

int main()
{
    struct Alunos alunos[10];


    for (int i = 0; i < 10; i++)
    {
        alunos[i].matricula = i + 1;
        printf("Qual a nota do aluno %d? \n", i + 1);
        if(scanf("%f", &alunos[i].nota) != 1)
        {
            puts("Digite uma nota valida");
            return 0;
        }
    }

    for (int j = 0; j < 10; j++)
    {
        printf("Aluno: %d, Nota: %f \n", alunos[j].matricula, alunos[j].nota);
    }
    return 0;
}