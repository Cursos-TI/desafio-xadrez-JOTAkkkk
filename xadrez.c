#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void bisbo( int numero){
    if (numero < 5) 
    {
        printf("Direita\n");
        printf("Cima\n");
        bisbo(numero + 1); 
    }
    
}

void torre(int numero){
    if (numero < 5)
    {
       printf("direita\n");
       torre(numero + 1);
    }
}

void rainha(int numero){
    if (numero < 8)
    {
       printf("esquerda\n");
       rainha(numero + 1);
    }
}

void cavalo(int numero){
    if (numero < 2)
    {
         printf("baixo\n");
         cavalo(numero + 1);
    } else {
        printf("esquerda\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    int t, b , r, c; // Variáveis para Torre, Bispo, Rainha e Cavalo
  
    // Implementação de Movimentação do Bispo
    printf("Movimento Bispo:\n");
    bisbo(b = 0);
    
    // Implementação de Movimentação da Torre
    printf("Movimento Torre:\n");
    torre(t = 0);
    
    // Implementação de Movimentação da Rainha
    printf("Movimento Rainha:\n");
    rainha(r = 0);

    // Nível Aventureiro - Movimentação do Cavalo
   
    printf("Movimento Cavalo:\n");
    cavalo(c = 0);

    return 0;
}
