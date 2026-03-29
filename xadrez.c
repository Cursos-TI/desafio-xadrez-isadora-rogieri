#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main()
{
    // Nível Aventureiro - Movimentando o Cavalo

    // ===== DEFINIÇÃO DAS QUANTIDADES DE MOVIMENTOS =====
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimentos do cavalo
    const int MOV_BAIXO = 2;
    const int MOV_ESQUERDA = 1;

    // Implementação de Movimentação do Bispo
    // ===== TORRE (FOR) =====
    // Movimento: 5 casas para a direita
    printf("=== Movimento da Torre ===\n");

    for (int i = 0; i < casasTorre; i++)
    {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Torre
    // ===== BISPO (WHILE) =====
    // Movimento: 5 casas na diagonal (Cima + Direita)
    printf("\n=== Movimento do Bispo ===\n");

    int contadorBispo = 0;

    while (contadorBispo < casasBispo)
    {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Implementação de Movimentação da Rainha
    // ===== RAINHA (DO-WHILE) =====
    // Movimento: 8 casas para a esquerda
    printf("\n=== Movimento da Rainha ===\n");

    int contadorRainha = 0;

    do
    {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    // Implementação de Movimentação do Cavalo
    // ===== CAVALO (LOOPS ANINHADOS) =====
    printf("\n=== Movimento do Cavalo ===\n");

    for (int i = 0; i < 1; i++)
    {

        int contador = 0;

        while (contador < MOV_BAIXO)
        {
            printf("Baixo\n");
            contador++;
        }

        printf("Esquerda\n");
    }

    return 0;
}
