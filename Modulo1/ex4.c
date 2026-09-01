/*
Considere que uma turma de quarta série realiza uma prova (valendo no máximo 10 pontos) a cada final de mês, durante todo o ano letivo.
No final do ano, o professor da turma entra no programa onde ele foi lançando as notas dos alunos e realiza as seguintes tarefas:
Lançar notas para um aluno
Visualizar as notas de um aluno específico, informando a matricula dele. Se a matricula for zero (0), então todos os alunos serão mostrados,
bem como todas as suas notas do ano.
Visualizar a lista dos aprovados e reprovados (no final do ano, notas menores que 50 geram reprovação. Iguais ou superiores, geram aprovação).
Visualizar o aluno destaque (aluno com maior somatório entre todos os alunos da turma).
Crie um programa em C, que permita ao professor fazer a tarefas acima. Use pelo menos um switch no seu código.
*/

#include "stdlib.h"
#include "stdio.h"

#define MESES 12struct Aluno
{ int matricula; char nome[50]; float notas[MESES];};

int main()
{
    int quantidade = 0;
    printf("Quantos alunos existem na turma? \n");
    if (scanf("%d", &quantidade) != 1)
    {
        printf("Digite um numero inteiro por favor");
        return 0;
    }
    getchar();
    struct Aluno alunos[quantidade];
    for (int i = 0; i < quantidade; i++)
    {
        alunos[i].matricula = i + 1;
        printf("Digite o nome do aluno %d: \n", i + 1);
        scanf("%s", alunos[i].nome);
        getchar();
        for (int m = 0; m < MESES;
        m++
        )
        {
            alunos[i].notas[m] = 0;
        }
    }
    int opcao = -1;
    while (opcao != 5)
    {
        puts("\n1 - Lancar notas para um aluno");
        puts("2 - Visualizar notas de um aluno (matricula 0 = todos)");
        puts("3 - Visualizar aprovados e reprovados");
        puts("4 - Visualizar aluno destaque");
        puts("5 - Sair");
        if (scanf("%d", &opcao) != 1)
        {
            printf("Digite um numero valido");
            return 0;
        }
        getchar();
        switch (opcao)
        {
        case 1:
            {
                int matricula, mes;
                float nota;
                printf("Matricula do aluno: \n");
                scanf("%d", &matricula);
                getchar();
                printf("Mes (1 a 12): \n");
                scanf("%d", &mes);
                getchar();
                printf("Nota (0 a 10): \n");
                scanf("%f", &nota);
                getchar();
                for (int i = 0; i < quantidade; i++)
                {
                    if (alunos[i].matricula == matricula)
                    {
                        alunos[i].notas[mes - 1] = nota;
                        break;
                    }
                }
                break;
            }
        case 2:
            {
                int matricula;
                printf("Matricula (0 para ver todos): \n");
                scanf("%d", &matricula);
                getchar();
                for (int i = 0; i < quantidade; i++)
                {
                    if (matricula == 0 || alunos[i].matricula == matricula)
                    {
                        printf("Aluno: %s, matricula: %d \n", alunos[i].nome, alunos[i].matricula);
                        for (int m = 0; m < MESES;
                        m++
                        )
                        {
                            printf(" Mes %d: %f \n", m + 1, alunos[i].notas[m]);
                        }
                    }
                }
                break;
            }
        case 3:
            {
                puts("Aprovados:");
                for (int i = 0; i < quantidade; i++)
                {
                    float soma = 0;
                    for (int m = 0; m < MESES;
                    m++
                    )
                    {
                        soma += alunos[i].notas[m];
                    }
                    if (soma >= 50) { printf("%s \n", alunos[i].nome); }
                }
                puts("Reprovados:");
                for (int i = 0; i < quantidade; i++)
                {
                    float soma = 0;
                    for (int m = 0; m < MESES;
                    m++
                    )
                    {
                        soma += alunos[i].notas[m];
                    }
                    if (soma < 50) { printf("%s \n", alunos[i].nome); }
                }
                break;
            }
        case 4:
            {
                int indiceDestaque = 0;
                float maiorSoma = 0;
                for (int i = 0; i < quantidade; i++)
                {
                    float soma = 0;
                    for (int m = 0; m < MESES;
                    m++
                    )
                    {
                        soma += alunos[i].notas[m];
                    }
                    if (i == 0 || soma > maiorSoma)
                    {
                        maiorSoma = soma;
                        indiceDestaque = i;
                    }
                }
                printf("Aluno destaque: %s, soma total: %f \n", alunos[indiceDestaque].nome, maiorSoma);
                break;
            }
        case 5: puts("Encerrando...");
            break;
        default: puts("Opcao invalida");
        }
    }
    return 0;
}
