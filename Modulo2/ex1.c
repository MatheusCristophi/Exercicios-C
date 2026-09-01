/*
Aqui está a transcrição do texto e das tabelas presentes na imagem:
Na confecção de três modelos de camisas (A, B e C) são usados botões grandes (G) e pequenos (p). O número de botões por modelos é dado pela tabela:
Camisa A | Camisa B | Camisa C |
Botões p | 3 | 1 | 3 |
Botões G | 6 | 5 | 5 |
O número de camisas fabricadas, de cada modelo, nos meses de maio e junho, é dado pela tabela:
Maio | Junho |
Camisa A | 100 | 50 |
Camisa B | 50 | 100 |
Camisa C | 50 | 50 |
Nestas condições, crie uma função que imprima a tabela que dá o total de botões usados em maio e junho.
*/

#include <stdio.h>

void imprimirTotalBotoes()
{
    int botoesP[3] = {3, 1, 3};
    int botoesG[3] = {6, 5, 5};
    int maio[3] = {100, 50, 50};
    int junho[3] = {50, 100, 50};
    int totalPMaio = 0, totalGMaio = 0;
    int totalPJunho = 0, totalGJunho = 0;
    for (int i = 0; i < 3; i++)
    {
        totalPMaio += botoesP[i] * maio[i];
        totalGMaio += botoesG[i] * maio[i];
        totalPJunho += botoesP[i] * junho[i];
        totalGJunho += botoesG[i] * junho[i];
    }
    printf(
        " | Maio | Junho \n");
    printf("Botoes p | %4d | %4d \n", totalPMaio, totalPJunho);
    printf("Botoes G | %4d | %4d \n", totalGMaio, totalGJunho);
}

int main()
{
    imprimirTotalBotoes();
    return 0;
}
