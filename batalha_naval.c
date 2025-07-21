#include <stdio.h>

int main() {
    // Define um tabuleiro 10x10 e variáveis para as coordenadas.
    int tabuleiro[10][10];
    int linha, coluna;
    int navio_linha_input, navio_coluna_input; // Variáveis para guardar a entrada do usuário

    // ----- PASSO 1: INICIALIZAR O TABULEIRO -----
    // Preenche todo o tabuleiro com 0 (água).
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // ----- PASSO 2: POSICIONAMENTO DOS NAVIOS (SOLICITADO AO USUÁRIO) -----

    // Solicita dados para o Navio 1 (Horizontal)
    printf("--- Posicionar Navio Horizontal (tamanho 3) ---\n");
    printf("Digite a linha (Y) onde o navio ficara (0 a 9): ");
    scanf("%d", &navio_linha_input);

    printf("Digite a coluna inicial (X) para o navio (0 a 7): "); // O navio deve caber no tabuleiro
    scanf("%d", &navio_coluna_input);

    // Usa um laço 'for' para posicionar as 3 partes do navio horizontalmente
    for (int i = 0; i < 3; i++) {
        // Mantém a linha fixa e incrementa a coluna
        tabuleiro[navio_linha_input][navio_coluna_input + i] = 1;
    }
    printf("Navio horizontal posicionado!\n\n");


    // Solicita dados para o Navio 2 (Vertical)
    printf("--- Posicionar Navio Vertical (tamanho 4) ---\n");
    printf("Digite a coluna (X) onde o navio ficara (0 a 9): ");
    scanf("%d", &navio_coluna_input);

    printf("Digite a linha inicial (Y) para o navio (0 a 6): "); // O navio deve caber no tabuleiro
    scanf("%d", &navio_linha_input);

    // Usa um laço 'for' para posicionar as 4 partes do navio verticalmente
    for (int i = 0; i < 4; i++) {
        // Mantém a coluna fixa e incrementa a linha
        tabuleiro[navio_linha_input + i][navio_coluna_input] = 1;
    }
    printf("Navio vertical posicionado!\n\n");


    // ----- PASSO 3: EXIBIÇÃO DAS COORDENADAS -----
    printf("--- COORDENADAS DOS NAVIOS POSICIONADOS ---\n");

    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            // Se encontrar uma parte do navio (valor 1), imprime a sua coordenada.
            if (tabuleiro[linha][coluna] == 1) {
                printf("  - Parte de navio na coordenada (X, Y): (%d, %d)\n", coluna, linha);
            }
        }
    }

    printf("\nSimulacao finalizada.\n");

    return 0;
}
