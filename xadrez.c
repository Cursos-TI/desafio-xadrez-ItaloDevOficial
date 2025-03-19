#include <stdio.h>

// Recursivo Rainha
void rainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda \n");
        rainha(casas - 1);
    }
}

//Recursivo Torre
void torre(int casas)
{
    if (casas > 0)
    {
        printf("Direita \n");
        torre(casas - 1);
    }
}

//Recursivo Bispo
void moverBispo(int x, int y, int passos) {
    if (passos == 0) return; // Caso base: interrompe a recursão quando completar os movimentos

    printf("Cima\n");
    printf("Esquerda\n");

    // Chama a si mesma para continuar o movimento diagonal (Cima e Esquerda)
    moverBispo(x - 1, y - 1, passos - 1);
}

int main()
{
    // Implementação de Movimentação do Bispo
    int bispo = 5; // Número de vezes que o bispo se moverá para cima e esquerda

    printf("\nMovimentos do Bispo:\n\n");

    // Loop aninhado para iniciar o movimento e chamar a função recursiva
    for (int i = 0; i < 1; i++) { // Apenas uma iteração, pois a recursão cuida do resto
        for (int j = 0; j < 1; j++) {
            moverBispo(0, 0, bispo); // Inicia o movimento recursivo
        }
    }

    // Implementação de Movimentação da Torre
    printf("\nTorre moveu:\n");
    torre(5);

    // Implementação de Movimentação da Rainha
    printf("\nRainha moveu:\n");
    rainha(8);

    // Implementação de Movimentação do Cavalo
    printf("\nCavalo moveu:\n");

    int movimentos = 2; // Definimos que o cavalo fará um movimento em "L"

    for (int i = 0, j = 0; i < movimentos && j < 1; i++) {  // Controla os dois movimentos "Cima"
        printf("Cima \n");

        for (int k = 0; k < 1; k++) {  // Controla o movimento "Direita"
            if (i == 1) {  // Só move para a direita após ter movido duas vezes para cima
                printf("Direita \n");
                j++; // Atualiza para indicar que a parte horizontal foi feita
            }
        }
    }
    return 0;
}
