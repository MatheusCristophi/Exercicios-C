/*
Uma escola quer digitalizar o boletim de uma turma. Cada aluno tem um nome e 4 notas ao longo do semestre.
Defina uma struct Aluno contendo:
char nome[50];
float notas[4];
float media;
O programa deve perguntar quantos alunos existem na turma e alocar um vetor de struct Aluno com esse tamanho.
Para cada aluno, ler o nome e as 4 notas, e calcular a média (soma das notas dividida por 4).
Ao final, percorrer o vetor de structs e:
Exibir a lista completa (nome + notas + média) de forma organizada.
Indicar o índice e o nome do aluno com a menor média da turma.
Por fim, peça ao usuário que digite um nome para busca e, dentro do próprio main() (com um laço for percorrendo o vetor de structs),
compare esse nome com o campo nome de cada struct Aluno, ignorando diferenças entre maiúsculas e minúsculas (ex.: "maria" deve encontrar "Maria").
Exiba o índice encontrado ou uma mensagem de "não encontrado".
*/

#include <stdio.h>
#include <stdlib.h>

struct Alunos
{
    char nome[50];
    float notas[4];
    float media;
};

int main()
{
    int quantidade = 0;
    puts("Quantos alunos possuem na turma?");
    if (scanf("%d", &quantidade) != 1)
    {
        printf("Digite um numero inteiro por favor");
        return 0;
    }
    getchar();
    struct Alunos alunos[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        puts("Qual o nome do aluno?");
        scanf("%s", alunos[i].nome);
        getchar();
        puts("Qual a primeira nota do aluno?");
        if (scanf("%f", &alunos[i].notas[0]) != 1)
        {
            printf("Digite um numero inteiro por favor");
            return 0;
        }
        getchar();
        puts("Qual a segunda nota do aluno?");
        if (scanf("%f", &alunos[i].notas[1]) != 1)
        {
            printf("Digite um numero inteiro por favor");
            return 0;
        }
        getchar();
        puts("Qual a terceira nota do aluno?");
        if (scanf("%f", &alunos[i].notas[2]) != 1)
        {
            printf("Digite um numero inteiro por favor");
            return 0;
        }
        getchar();
        puts("Qual a quarta nota do aluno?");
        if (scanf("%f", &alunos[i].notas[3]) != 1)
        {
            printf("Digite um numero inteiro por favor");
            return 0;
        }
        getchar();
    }

    for (int k = 0; k < quantidade; k++)
    {
        alunos[k].media = (alunos[k].notas[0] + alunos[k].notas[1] + alunos[k].notas[2] + alunos[k].notas[3]) / 4;
    }

    for (int j = 0; j < quantidade; j++)
    {
        printf("Aluno: %s, notas: [ %f, %f, %f, %f ], media: %f \n",
               alunos[j].nome, alunos[j].notas[0], alunos[j].notas[1], alunos[j].notas[2], alunos[j].notas[3],
               alunos[j].media
        );
    }

    return 0;
}
