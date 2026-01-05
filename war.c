#include <stdio.h>
#include <string.h>

// ------- Contantes Globais
#define TOTAL_TERRITORIOS 5

// ---------- Struct Territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[TOTAL_TERRITORIOS];
    
    // ------------ Cadastro dos territórios
    int i;
    for (i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("\n--- Cadastrando Território %d ---\n", i + 1);

        printf("Nome do Território: ");
        scanf("%29s", territorios[i].nome);

        printf("Cor do Exército: ");
        scanf("%9s", territorios[i].cor);

        printf("Quantidade de Tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // ------------- Exibição dos territórios cadastrados:
    printf("\n=========================================");
    printf("\n  == MAPA DO MUNDO =-= ESTADO ATUAL ==\n");
    printf("=========================================\n");
    
    for (i = 0; i < TOTAL_TERRITORIOS; i++) {
        printf("\nTERRITÓRIO %d\n", i + 1);
        printf("- Nome: %s\n", territorios[i].nome);
        printf("- Dominado por: %s\n", territorios[i].cor);
        printf("- Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}