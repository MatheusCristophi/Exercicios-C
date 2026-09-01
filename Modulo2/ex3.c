/*
Elabore uma função que receba como parâmetros dois valores reais a
e b. A função deve ler uma sequência de valores reais e imprimir a
média aritmética dos valores que pertencerem ao intervalo fechado
entre a e b . A sequência de valores deverá ser encerrada quando for
lido um valor negativo.
Exemplo: Com entradas a=7, b=3 e sequência= 5 2 9 8 3 1 -2, a função
deve imprimir o valor 4.
*/

#include "stdio.h"
#include "stdlib.h"

void mediaNoIntervalo(float a, float b)
{
    float menor = a < b ? a : b;
    float maior = a > b ? a : b;
    float soma = 0;
    int quantidade = 0;
    float valor;
    printf("Digite os valores (um negativo encerra): \n");
    while (scanf("%f", &valor) == 1 && valor >= 0)
    {
        if (valor >= menor && valor <= maior)
        {
            soma += valor;
            quantidade++;
        }
    }
    if (quantidade > 0)
    {
        printf("Media dos valores no intervalo: %f \n", soma / quantidade);
    }
    else
    {
        printf("Nenhum valor dentro do intervalo \n");
    }
}
