#include <stdio.h>

void movimento_torre(int torre){
    if (torre < 5)
    {
       printf("direita\n");
       movimento_torre(torre + 1);
    }
}

void movimento_rainha(int rainha){
    if (rainha < 8)
    {
        printf("Esquerda\n");
        movimento_rainha(rainha + 1);
    }
    
}


void mover_bispo(int cima, int direita, int limite) {
    if (cima >= limite || direita >= limite) {
        printf("O bispo terminou seu movimento\n\n");
        return;
    }

    for (int i = cima; i < limite; i++) {
        printf("cima\n");
            for (int j = direita; j < limite; j++) {
                printf("direita\n");

                mover_bispo(i + 1, j + 1, limite);
                return;
            }
    }
}


int main(){
// movimento torre
    printf("A torre está movimentando\n");
    movimento_torre(0);
    printf("A torre terminou seu movimento \n\n");

// programação do bispo
    printf("O bispo está movimentando\n");

    
printf("O bispo está movimentando\n\n");
    mover_bispo(0, 0, 5); // Simula até a posição (3,3)
    

//programação rainha
    printf("A rainha está movimentando\n");
        movimento_rainha(0);
        printf("A rainha terminou seu movimento \n\n");

// programação do cavalo
printf("O cavalo está movimentando\n");
    for (int movimento_cavalo = 0; movimento_cavalo <= 1; movimento_cavalo++)
    {
        int movimento_cavalo2=1;
        while (movimento_cavalo2<=2)
        {
            printf("cima\n");
            ++movimento_cavalo2;
        }
        printf("direita\n");
        ++movimento_cavalo;
    }
    printf("o cavalo terminou seu movimento \n\n");


    return 0;
}
