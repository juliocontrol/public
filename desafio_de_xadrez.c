
#include <stdio.h>

int main() {

    // ENTRADA DE DADOS
    const int movimentos_bispo = 5;
    const int movimentos_torre = 5;
    const int movimentos_rainha = 8;

    // Variável que será usada como contador nos loops 'while' e 'do-while'.
    int contador;

    // --- MOVIMENTAÇÃO DO BISPO (usando o loop 'for') ---

    // Imprime um título para organizar a saída. O '\n' serve para pular uma linha.
    printf("--- Movimentacao do Bispo ---\n");
    printf("O Bispo se movera %d casas na diagonal superior direita.\n\n", movimentos_bispo);

    // 1. Início: 'int i = 1' -> Cria um contador 'i' que começa em 1.
    // 2. Condição: 'i <= movimentos_bispo' -> O loop continua enquanto 'i' for menor ou igual a 5.
    // 3. Incremento: 'i++' -> No final de cada repetição, 'i' aumenta em 1.
    for (int i = 1; i <= movimentos_bispo; i++) {
        // Para a movimentação na diagonal, combinamos as direções básicas.
        printf("Movimento %d do Bispo: Cima e Direita\n", i);
        // printf("Cima\n");
        // printf("Direita\n\n"); // Adiciona uma linha em branco para separar os movimentos.
    }

    // --- MOVIMENTAÇÃO DA TORRE (usando o loop 'while') ---

    printf("\n\n--- Movimentacao da Torre ---\n");
    printf("A Torre se movera %d casas para a direita.\n\n", movimentos_torre);

    // É importante iniciar o contador antes do loop 'while'.
    contador = 0;

    // O loop 'while' (enquanto) verifica a condição ANTES de executar o código.
    // O bloco de código só roda se a condição (contador < 5) for verdadeira.
    while (contador < movimentos_torre) {
        printf("Movimento da Torre: Direita\n");

        // É fundamental incrementar o contador dentro do loop.
        // Se esquecermos, o loop se torna infinito!
        contador++;
    }

    // --- MOVIMENTAÇÃO DA RAINHA (usando o loop 'do-while') ---

    printf("\n\n--- Movimentacao da Rainha ---\n");
    printf("A Rainha se movera %d casas para a esquerda.\n\n", movimentos_rainha);

    // Reiniciamos o contador para o novo loop.
    contador = 0;

    // ele primeiro EXECUTA o bloco de código uma vez e SÓ DEPOIS verifica a condição.
    // Isso garante que o código rode pelo menos uma vez.
    do {
        printf("Movimento da Rainha: Esquerda\n");

        // Incrementamos o contador.
        contador++;
    } while (contador < movimentos_rainha); // A condição é verificada aqui, no final.


    // 'return 0' indica ao sistema operacional que o programa terminou com sucesso.
    return 0;
}
