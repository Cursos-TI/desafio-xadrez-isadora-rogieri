#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main()
{
    // Nível Novato - Movimentação das Peças

    // ===== DEFINIÇÃO DAS QUANTIDADES DE MOVIMENTOS =====
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

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

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
