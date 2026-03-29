#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre - Criando Movimentos Complexos

// MOVIMENTAÇÃO TORRE
void moverTorre(int casas)
{
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

// MOVIMENTAÇÃO RAINHA
void moverRainha(int casas)
{
    if (casas == 0)
        return;

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// MOVIMENTAÇÃO BISPO
void moverBispo(int casas)
{
    for (int i = 0; i < casas; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            printf("Cima Direita\n");
        }
    }
}

// MOVIMENTAÇÃO CAVALO
void moverCavalo()
{
    int i, j;

    for (i = 0; i < 3; i++)
    {

        if (i < 2)
        {
            printf("Cima\n");
        }
        else
        {
            for (j = 0; j < 2; j++)
            {

                if (j == 0)
                {
                    printf("Direita\n");
                    break;
                }

                continue;
            }
        }
    }
}

int main()
{

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    printf("=== TORRE ===\n");
    moverTorre(casasTorre);

    printf("\n");

    // RAINHA
    printf("=== RAINHA ===\n");
    moverRainha(casasRainha);

    printf("\n");

    // BISPO
    printf("=== BISPO ===\n");
    moverBispo(casasBispo);

    printf("\n");

    // CAVALO
    printf("=== CAVALO ===\n");
    moverCavalo();

    return 0;
}