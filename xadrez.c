#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){

    // programação da torre
    int movimento_torre=1;
    int movimento_bispo=1;

    printf("Torre está se movimentando\n");
    while (movimento_torre <=5)
    {
        printf("Direita\n");
        movimento_torre++;
    }

    printf("A torre terminou seu movimento \n\n");

        // programação do bispo
        printf("Bispo está se movimentando\n");
        do
        {
            printf("Cima, direita\n");
            movimento_bispo++;
        } while (movimento_bispo<=5);

        printf("O bispo terminou seu movimento \n\n");

            //programação rainha
            printf("A rainha está movimentando\n");
            for (int movimento_rainha = 0; movimento_rainha <= 7; movimento_rainha++)
            {
                printf("esquerda\n");
            }
            printf("A rainha terminou seu movimento \n\n");

    return 0;
}
