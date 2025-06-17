#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constantes para o número de movimentos
#define MOVIMENTOS_CAVALO 1
#define PASSOS_BAIXO 2
#define PASSOS_ESQUERDA 1

int main() {
    // Mensagem de boas-vindas
    printf("Desafio de Xadrez - MateCheck (Nivel Aventureiro)\n");
    printf("Movimentação do Cavalo: L para Baixo e Esquerda\n\n");

    // Loop para repetir o movimento do cavalo uma vez (poderia ser mais vezes com outro valor em MOVIMENTOS_CAVALO)
    for (int movimento = 1; movimento <= MOVIMENTOS_CAVALO; movimento++) {
        printf("Movimento %d:\n", movimento);

        // Loop para mover 2 casas para baixo
        int passo_baixo = 0;
        while (passo_baixo < PASSOS_BAIXO) {
            printf("Baixo\n");
            passo_baixo++;
        }

        // Loop para mover 1 casa para a esquerda
        int passo_esquerda = 0;
        for (; passo_esquerda < PASSOS_ESQUERDA; passo_esquerda++) {
            printf("Esquerda\n");
        }

        printf("----\n");
    }

    return 0;
}

