#include <stdio.h>

int main (int argc, char *argv[]) {

    // Definindo as constantes de movimento
    int CINCO = 5;
    int OITO = 8;
    int loop = 1;
    int indice;

    // Fazendo o movimento das peças dentro de um mesmo Loop
    printf("*** Começando o jogo de Xadrez ***\n");
    while (loop) {
        // Implementação de Movimentação do Bispo
        printf("Começando o movimento do Bispo:\n");
        indice = 1;
        while (indice <= CINCO) {
            printf("Cima\n");
            printf("Direita\n"); 
            indice++;
        }

        // Implementação de Movimentação da Torre
        printf("Começando o movimento da Torre:\n");
        indice = 1;
        do {
            printf("Direita\n"); 
            indice++;
        } while(indice <= CINCO);

        // Implementação de Movimentação da Rainha
        printf("Começando o movimento da Rainha:\n");
        for (indice = 1; indice <= OITO; indice++) {
            printf("Esquerda\n");
        }

        // Implementação de Movimentação do Cavalo
        printf("Começando o movimento do Cavalo:\n");
        indice = 0;
        while (indice < 1) {
            for (int j = 0; j < 1; j++) {
                for (int i = 0; i < 2; i++) {
                printf("Baixo\n");
            } 
            printf("Esquerda\n");
            }
            indice++;
        }
        break;
    }
    
    return 0;
}