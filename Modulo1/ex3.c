/*
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova,
nota da segunda prova e nota da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
*/

#include "stdlib.h"
#include "stdio.h"

struct Aluno
{
    int matricula;
    char nome[50];
    float notaP1;
    float notaP2;
    float notaP3;
};

int main()
{
    struct Aluno alunos[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a matricula do aluno %d: \n", i + 1);
        if (scanf("%d", &alunos[i].matricula) != 1)
        {
            printf("Digite um numero inteiro por favor");
            return 0;
        }
        getchar();
        printf("Digite o nome do aluno %d: \n", i + 1);
        scanf("%s", alunos[i].nome);
        getchar();
        printf("Digite a nota da primeira prova: \n");
        if (scanf("%f", &alunos[i].notaP1) != 1)
        {
            printf("Digite um numero valido");
            return 0;
        }
        getchar();
        printf("Digite a nota da segunda prova: \n");
        if (scanf("%f", &alunos[i].notaP2) != 1)
        {
            printf("Digite um numero valido");
            return 0;
        }
        getchar();
        printf("Digite a nota da terceira prova: \n");
        if (scanf("%f", &alunos[i].notaP3) != 1)
        {
            printf("Digite um numero valido");
            return 0;
        }
        getchar();
    }
    int indiceMaiorP1 = 0;
    for (int i = 1; i < 5; i++) { if (alunos[i].notaP1 > alunos[indiceMaiorP1].notaP1) { indiceMaiorP1 = i; } }
    int indiceMaiorMedia = 0;
    float maiorMedia = (alunos[0].notaP1 + alunos[0].notaP2 + alunos[0].notaP3) / 3;
    for (int i = 1; i < 5; i++)
    {
        float media = (alunos[i].notaP1 + alunos[i].notaP2 + alunos[i].notaP3) / 3;
        if (media > maiorMedia)
        {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }
    }
    printf("Aluno com maior nota na primeira prova: %s (matricula %d), nota: %f \n", alunos[indiceMaiorP1].nome,
           alunos[indiceMaiorP1].matricula, alunos[indiceMaiorP1].notaP1);
    printf("Aluno com maior media geral: %s (matricula %d), media: %f \n", alunos[indiceMaiorMedia].nome,
           alunos[indiceMaiorMedia].matricula, maiorMedia);
    return 0;
}
