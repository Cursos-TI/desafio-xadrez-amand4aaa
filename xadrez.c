#include <stdio.h>

int main() {

printf("Nível Novato - Movimentação das Peças:\n"); 


    // Constantes para o número de casas
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // -------------------------
    // Movimentação da Torre (FOR) → Direita
    // -------------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // -------------------------
    // Movimentação do Bispo (WHILE) → Diagonal Cima + Direita
    // -------------------------
    printf("Movimento do Bispo:\n");
    int contadorBispo = 1;
    while (contadorBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

    // -------------------------
    // Movimentação da Rainha (DO-WHILE) → Esquerda
    // -------------------------
    printf("Movimento da Rainha:\n");
    int contadorRainha = 1;
    do {
        printf("Casa %d: Esquerda\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}

