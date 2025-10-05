#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

struct CartasSuperTrunfo
{
    char estado;
    char codigo_carta[4];
    char nome_cidade[30];
    unsigned long int populacao;
    float area;
    float pib;
    float densidade_populacional;
    float pib_per_capita;
    int pontos_turisticos;
    float super_poder;
};


int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    struct CartasSuperTrunfo carta1;
    struct CartasSuperTrunfo carta2;
    char *cidadeVencedora;
        
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    printf("---------- Cadastro da carta 1 ----------\n");
    printf("Digite o estado: ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta1.codigo_carta);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.nome_cidade);
    printf("Digite o tamanho da populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB (R$): ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    carta1.densidade_populacional = carta1.populacao/carta1.area; // Calcula a densidade populacional da carta1
    carta1.pib_per_capita = carta1.pib/carta1.populacao; // Calcula o PIB per capita da carta1
    carta1.super_poder = carta1.populacao + carta1.pib +
                         carta1.area +
                         carta1.pib_per_capita +
                         carta1.pontos_turisticos +
                         (1/carta1.densidade_populacional); // Calcula o super poder

    printf("\n---------- Cadastro da carta 2 ----------\n");
    printf("Digite o estado: ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta2.codigo_carta);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.nome_cidade);
    printf("Digite o tamanho da populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB (R$): ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    carta2.densidade_populacional = carta2.populacao/carta2.area; // Calcula a densidade populacional da carta2
    carta2.pib_per_capita = carta2.pib/carta2.populacao; // Calcula o PIB per capita da carta2
    carta2.super_poder = carta2.populacao + carta2.pib +
                         carta2.area +
                         carta2.pib_per_capita +
                         carta2.pontos_turisticos +
                         (1/carta2.densidade_populacional); // Calcula o super poder

    // Exibição dos Dados das Cartas:
    printf("\n\n======= Carta 1 =======");
    printf("\nEstado: %c", carta1.estado);
    printf("\nCódigo da carta: %s", carta1.codigo_carta);
    printf("\nNome da cidade: %s", carta1.nome_cidade);
    printf("\nPopulação: %lu habitantes", carta1.populacao);
    printf("\nÁrea: %.2fkm²", carta1.area);
    printf("\nPIB: R$%.2f", carta1.pib);
    printf("\nNúmero de pontos turísticos: %d", carta1.pontos_turisticos);
    printf("\nDensidade Populacional: %.2fhab/km²", carta1.densidade_populacional);
    printf("\nPIB per Capita: R$%.2f", carta1.pib_per_capita);
    printf("\nSuper poder: %.4f", carta1.super_poder);

    printf("\n\n======= Carta 2 =======");
    printf("\nEstado: %c", carta2.estado);
    printf("\nCódigo da carta: %s", carta2.codigo_carta);
    printf("\nNome da cidade: %s", carta2.nome_cidade);
    printf("\nPopulação: %lu habitantes", carta2.populacao);
    printf("\nÁrea: %.2fkm²", carta2.area);
    printf("\nPIB: R$%.2f", carta2.pib);
    printf("\nNúmero de pontos turísticos: %d", carta2.pontos_turisticos);
    printf("\nDensidade Populacional: %.2fhab/km²", carta2.densidade_populacional);
    printf("\nPIB per Capita: R$%.2f", carta2.pib_per_capita);
    printf("\nSuper poder: %.4f", carta2.super_poder);
    printf("\n");


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\n\n======= Comparação das cartas =======\n");
    printf("\n--- Atributo: População ---");
    if(carta1.populacao > carta2.populacao) {
        printf("\nCidade 1 tem maior população.\n");
        cidadeVencedora = carta1.nome_cidade;
    } else {
        printf("\nCidade 2 tem maior população.\n");
        cidadeVencedora = carta2.nome_cidade;
    }
    
    printf("\n--- Atributo: Área ---");
    if(carta1.area > carta2.area) {
        printf("\nCidade 1 tem maior área.\n");
    } else {
        printf("\nCidade 2 tem maior área.\n");
    }
    
    printf("\n--- Atributo: PIB ---");
    if(carta1.pib > carta2.pib) {
        printf("\nCidade 1 tem maior PIB.\n");
    } else {
        printf("\nCidade 2 tem maior PIB.\n");
    }
    
    printf("\n--- Atributo: Pontos turísticos ---");
    if(carta1.pontos_turisticos > carta2.pontos_turisticos) {
        printf("\nCidade 1 tem mais pontos turísticos.\n");
    } else {
        printf("\nCidade 2 tem mais pontos turísticos.\n");
    }
    
    printf("\n--- Atributo: Densidade Populacional ---");
    if(carta1.densidade_populacional < carta2.densidade_populacional) {
        printf("\nCidade 1 tem menor densidade populacional.\n");
    } else {
        printf("\nCidade 2 tem menor densidade populacional.\n");
    }
    
    printf("\n--- Atributo: PIB per Capita ---");
    if(carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("\nCidade 1 tem maior PIB per Capita.\n");
    } else {
        printf("\nCidade 2 tem maior PIB per Capita.\n");
    }
    
    printf("\n--- Atributo: Super poder ---");
    if(carta1.super_poder > carta2.super_poder) {
        printf("\nCidade 1 tem maior Super poder.\n");
    } else {
        printf("\nCidade 2 tem maior Super poder.\n");
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf("\n\nA cidade vencedora é: %s\n\n\n", cidadeVencedora);

    return 0;
}
