#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int Bispo=1, Torre, Rainha=1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("\nBispo moveu:\n");
    do
    {
        printf("Cima, Direita \n");
        Bispo++;
    } while (Bispo <= 5);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nTorre moveu:\n");
    for (Torre = 1; Torre <= 5; Torre++)
    {
        printf("Direita \n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\nRainha moveu:\n");
    while (Rainha <= 8)
    {
        printf("Esquerda \n");
        Rainha++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    int cavalo = 1;
    int movimento;

    printf("\nCavalo moveu:\n");

    while (cavalo < 2)
    {
        for (movimento = 1; movimento <= 2; movimento++)
        {
            printf("Baixo \n");
        }
        cavalo++;
        
        printf("Esquerda \n");
    }
    
















    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
