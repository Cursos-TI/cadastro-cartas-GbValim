#include <stdio.h>
#include <string.h>

int main() {

    // Definição da estrutura da carta
    struct Carta {
        char estado;
        char codigo[4];              // Ex: A01 + '\0'
        char nomeCidade[100];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
       
    };

    struct Carta carta1, carta2;

    /* =========================
       Cadastro da Carta 1
    ========================== */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Nome da Cidade: ");
    getchar(); // limpa o \n deixado pelo scanf anterior
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

   

    carta1.densidadePopulacional = (float) carta1.populacao / carta1.area;
    carta1.pibPerCapita = (float) carta1.pib / carta1.populacao;


    /* =========================
       Cadastro da Carta 2
    ========================== */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", carta2.codigo);

    printf("Nome da Cidade: ");
    getchar();
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = 0;

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    

    carta2.densidadePopulacional = (float) carta2.populacao / carta2.area;
    carta2.pibPerCapita = (float) carta2.pib / carta2.populacao;


    /* =========================
       Exibição das Cartas
    ========================== */

    printf("\n\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("DensidadePopulacional: %f  hab/km² \n", carta1.densidadePopulacional);
    printf("pib per capita: %f  Reais\n", carta1.pibPerCapita);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("DensidadePopulacional: %f\n  hab/km \n²", carta2.densidadePopulacional);
    printf("pib per capita: %f  Reais \n", carta2.pibPerCapita, " Reais");

    return 0;
}
