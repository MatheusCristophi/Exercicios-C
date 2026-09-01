#include <stdio.h>

void preencherEInverter(int n)
{
    int vetor1[n];
    int vetor2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: \n", i + 1);
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        vetor2[i] = vetor1[n - 1 - i];
    }
    printf("Vetor 1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor1[i]);
    }
    printf("\n");
    printf("Vetor 2 (invertido): ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor2[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Digite o tamanho dos vetores: \n");
    if (scanf("%d", &n) != 1)
    {
        printf("Digite um numero inteiro por favor");
        return 0;
    }
    preencherEInverter(n);

    return 0;
}
