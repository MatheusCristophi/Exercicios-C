/*
Escrever um programa C que calcule e retorne a soma da sequência 1; 2; : : : ; N, onde N é um número inteiro fornecido como argumento de entrada. Use Funções.
*/

#include "stdlib.h"
#include "stdio.h"

int somaSequencia(int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    return soma;
}

int main()
{
    int n;
    printf("Digite o valor de N: \n");
    if (scanf("%d", &n) != 1)
    {
        printf("Digite um numero inteiro por favor");
        return 0;
    }
    printf("A soma da sequencia de 1 a %d e: %d \n", n, somaSequencia(n));
    return 0;
}
