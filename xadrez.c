#include <stdio.h>

// -------------------------
// Funções Recursivas (Nível Mestre)
// -------------------------

// Torre Recursiva → Direita
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // Caso base
    printf("Casa %d: Direita\n", atual);
    moverTorre(casas, atual + 1); // Chamada recursiva
}

// Bispo Recursivo → Diagonal Cima + Direita
void moverBispo(int casas, int atual) {
    if (atual > casas) return; // Caso base
    for (int i = 0; i < 1; i++) {           // Loop externo (vertical)
        for (int j = 0; j < 1; j++) {       // Loop interno (horizontal)
            printf("Casa %d: Cima, Direita\n", atual);
        }
    }
    moverBispo(casas, atual + 1); // Chamada recursiva
}

// Rainha Recursiva → Esquerda
void moverRainha(int casas, int atual) {
    if (atual > casas) return; // Caso base
    printf("Casa %d: Esquerda\n", atual);
    moverRainha(casas, atual + 1); // Chamada recursiva
}

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

    // -------------------------
    // Nível Aventureiro - Movimento do Cavalo
    // -------------------------
    printf("\n\nNível Aventureiro - Movimento do Cavalo:\n");

    // Constantes do movimento do Cavalo
    const int casasBaixo = 2;
    const int casasEsquerda = 1;

    // Loop externo (for) → controla as casas para baixo
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Casa %d: Baixo\n", i);

        // Loop interno (while) → executa a movimentação para a esquerda
        int j = 1;
        while (j <= casasEsquerda && i == casasBaixo) {
            // Só executa quando terminar os movimentos para baixo
            printf("Casa %d: Esquerda\n", casasBaixo + j);
            j++;
        }
    }

    // -------------------------
    // Nível Mestre
    // -------------------------
    printf("\n\nNível Mestre - Movimentações:\n");

    // Torre com Recursividade
    printf("Movimento da Torre (Recursividade):\n");
    moverTorre(5, 1);

    printf("\n");

    // Bispo com Recursividade + Loops Aninhados
    printf("Movimento do Bispo (Recursividade + Loops Aninhados):\n");
    moverBispo(5, 1);

    printf("\n");

    // Rainha com Recursividade
    printf("Movimento da Rainha (Recursividade):\n");
    moverRainha(8, 1);

    printf("\n");

    // Cavalo com Loops Complexos (2 cima + 1 direita)
    printf("Movimento do Cavalo (Loops Complexos):\n");

    int movimentos = 3; // 2 cima + 1 direita
    for (int i = 1, cima = 0, direita = 0; i <= movimentos; i++) {
        if (cima < 2) {
            printf("Casa %d: Cima\n", i);
            cima++;
            continue; // pula para próxima iteração
        }
        if (direita < 1) {
            printf("Casa %d: Direita\n", i);
            direita++;
            break; // encerra após completar o "L"
        }
    }

    return 0;
}
