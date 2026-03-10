#include <stdio.h>
#include <stdlib.h>

/**
 * Projeto: Desafio de Movimentação de Peças de Xadrez
 * Descrição: O programa simula o deslocamento de Torre, Bispo e Rainha
 * permitindo ao usuário escolher a peça, a quantidade de casas e a direção.
 */

int main() {
    // Declaração de variáveis para controle de loops e escolha do usuário
    int torre, bispo, rainha, rainha2;
    int peca, casas, direcao;

    // Menu principal para escolha da peça
    printf("--- Simulador de Movimentação de Xadrez ---\n");
    printf("Escolha a peça que você quer movimentar:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("Escolha a peça: ");
    scanf("%d", &peca);

    // Estrutura principal para tratar a peça escolhida
    switch (peca) {
        case 1: // Logica de movimentação da Torre
            printf("\nVocê escolheu a Torre.\n");
            printf("Quantas casas você quer mover a torre? ");
            scanf("%d", &casas);

            // Validação de entrada: Garante que o movimento seja entre 1 e 5 casas
            while (casas < 1 || casas > 5) {
                printf("Número inválido. Digite um número entre 1 e 5: ");
                scanf("%d", &casas);
            }

            // Menu de direções para a Torre (Movimentos Ortogonais)
            printf("Escolha a direção:\n");
            printf("1. Direita\n2. Esquerda\n3. Cima\n4. Baixo\n");
            printf("Escolha: ");
            scanf("%d", &direcao);

            switch (direcao) {
                case 1:
                    printf("Movimento da Torre: ");
                    for (torre = 1; torre <= casas; torre++) printf("%d (Direita) ", torre);
                    break;
                case 2:
                    printf("Movimento da Torre: ");
                    for (torre = 1; torre <= casas; torre++) printf("%d (Esquerda) ", torre);
                    break;
                case 3:
                    printf("Movimento da Torre: ");
                    for (torre = 1; torre <= casas; torre++) printf("%d (Cima) ", torre);
                    break;
                case 4:
                    printf("Movimento da Torre: ");
                    for (torre = 1; torre <= casas; torre++) printf("%d (Baixo) ", torre);
                    break;
                default:
                    printf("Direção inválida.");
            }
            break;

        case 2: // Logica de movimentação do Bispo
            printf("\nVocê escolheu o Bispo.\n");
            printf("Quantas casas você quer mover o bispo? ");
            scanf("%d", &casas);

            while (casas < 1 || casas > 5) {
                printf("Número inválido. Digite um número entre 1 e 5: ");
                scanf("%d", &casas);
            }

            // Menu de direções para o Bispo (Movimentos Diagonais)
            printf("Escolha a direção:\n");
            printf("1. Cima-Direita\n2. Cima-Esquerda\n3. Baixo-Direita\n4. Baixo-Esquerda\n");
            printf("Escolha: ");
            scanf("%d", &direcao);

            switch (direcao) {
                case 1:
                    printf("Movimento do Bispo: ");
                    for (bispo = 1; bispo <= casas; bispo++) printf("%d (Cima-Direita) ", bispo);
                    break;
                case 2:
                    printf("Movimento do Bispo: ");
                    for (bispo = 1; bispo <= casas; bispo++) printf("%d (Cima-Esquerda) ", bispo);
                    break;
                case 3:
                    printf("Movimento do Bispo: ");
                    for (bispo = 1; bispo <= casas; bispo++) printf("%d (Baixo-Direita) ", bispo);
                    break;
                case 4:
                    printf("Movimento do Bispo: ");
                    for (bispo = 1; bispo <= casas; bispo++) printf("%d (Baixo-Esquerda) ", bispo);
                    break;
                default:
                    printf("Direção inválida.");
            }
            break;

        case 3: // Logica de movimentação da Rainha
            printf("\nVocê escolheu a Rainha.\n");
            printf("Quantas casas você quer mover a rainha? ");
            scanf("%d", &casas);

            while (casas < 1 || casas > 5) {
                printf("Número inválido. Digite um número entre 1 e 5: ");
                scanf("%d", &casas);
            }

            // A Rainha combina os movimentos da Torre e do Bispo
            printf("Escolha a direção:\n");
            printf("1. Direita\n2. Esquerda\n3. Cima\n4. Baixo\n5. Cima-Direita\n6. Cima-Esquerda\n7. Baixo-Direita\n8. Baixo-Esquerda\n");
            printf("Escolha: ");
            scanf("%d", &direcao);

            printf("Movimento da Rainha: ");
            switch (direcao) {
                // Reaproveita loops for para as 8 direções possíveis
                case 1: for (rainha = 1; rainha <= casas; rainha++) printf("%d (Direita) ", rainha); break;
                case 2: for (rainha = 1; rainha <= casas; rainha++) printf("%d (Esquerda) ", rainha); break;
                case 3: for (rainha = 1; rainha <= casas; rainha++) printf("%d (Cima) ", rainha); break;
                case 4: for (rainha = 1; rainha <= casas; rainha++) printf("%d (Baixo) ", rainha); break;
                case 5: for (rainha2 = 1; rainha2 <= casas; rainha2++) printf("%d (Cima-Direita) ", rainha2); break;
                case 6: for (rainha2 = 1; rainha2 <= casas; rainha2++) printf("%d (Cima-Esquerda) ", rainha2); break;
                case 7: for (rainha2 = 1; rainha2 <= casas; rainha2++) printf("%d (Baixo-Direita) ", rainha2); break;
                case 8: for (rainha2 = 1; rainha2 <= casas; rainha2++) printf("%d (Baixo-Esquerda) ", rainha2); break;
                default: printf("Direção inválida.");
            }
            break;

        default:
            printf("\nPeça inválida.");
    }

    printf("\n\nFim da simulação.\n");
    return 0;
}
