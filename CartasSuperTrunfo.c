#include <stdio.h>
#include <string.h>

int main() {

    // Definição da estrutura da carta
    struct Carta {
        char estado;
        char codigo[4];
        char nomeCidade[100];
        unsigned long int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulacional;
        float pibPerCapita;
        float superPoder;
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
    getchar();
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = 0;

    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0f) / carta1.populacao;

    carta1.superPoder =
        (float)carta1.populacao +
        carta1.area +
        carta1.pib +
        (float)carta1.pontosTuristicos +
        carta1.pibPerCapita +
        (1.0f / carta1.densidadePopulacional);

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
    scanf("%lu", &carta2.populacao);

    printf("Area (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0f) / carta2.populacao;

    carta2.superPoder =
        (float)carta2.populacao +
        carta2.area +
        carta2.pib +
        (float)carta2.pontosTuristicos +
        carta2.pibPerCapita +
        (1.0f / carta2.densidadePopulacional);


float resultadoPopulacao = carta1.populacao > carta2.populacao;

if (resultadoPopulacao == 1) {
printf ("Carta 1 venceu (1)");
}
else{
    printf("Carta dois venceu (0)");
}

float resultadoArea = carta1.area > carta2.area;


float resultadoPib = carta1.pib > carta2.pib;



float resultadoTuristico =
 carta1.pontosTuristicos > carta2.pontosTuristicos;


float resultadoDensidade =
 carta1.densidadePopulacional < carta2.densidadePopulacional;


float resultadoPibCap =
 carta1.pibPerCapita > carta2.pibPerCapita;


float resultadoPoder
 = carta1.superPoder > carta2.superPoder;




    /* =========================
       Exibição das Cartas
    ========================== */

    printf("\n\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f Reais\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f Reais\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    if (resultadoArea == 1) {
printf ("area: Carta 1 venceu (1)\n");
}
else{
    printf("Carta dois venceu (0)\n");
}

if (resultadoPib == 1) {
printf ("Pib: Carta 1 venceu (1)\n");
}
else{
    printf("Carta dois venceu (0)\n");
}

if (resultadoTuristico == 1) {
printf ("Pontos Turisticos: Carta 1 venceu (1)\n");
}
else{
    printf("Carta dois venceu (0)\n");
}

if (resultadoDensidade == 1) {
printf ("Densidade Populacional: Carta 1 venceu (1)\n");
}
else{
    printf("Densidade Populacional: Carta 2 venceu (0)\n");
}

if (resultadoPibCap == 1) {
printf ("PIB per Capita: Carta 1 venceu (1)\n");
}
else{
    printf("PIB per Capita: Carta 2 venceu (0)\n");
}

if (resultadoPoder == 1) {
printf ("Mais poderoso: Carta 1 venceu (1)\n");
}
else{
    printf("Mais poderoso: Carta 2 venceu (0)\n");
}

    return 0;
}
