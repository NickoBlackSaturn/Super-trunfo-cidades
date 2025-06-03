#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para calcular os dados derivados
void calcular_dados(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para imprimir os dados de uma carta
void exibir_carta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per capita: %.2f\n\n", carta.pib_per_capita);
}

int main() {
    // Cadastro das cartas (fixo para este nível)
    Carta carta1 = {"São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 2300000.00, 50};
    Carta carta2 = {"Rio de Janeiro", "RJ01", "Rio de Janeiro", 6000000, 1182.30, 900000.00, 40};

    // Cálculo dos dados derivados
    calcular_dados(&carta1);
    calcular_dados(&carta2);

    // Exibir cartas
    printf("Carta 1:\n");
    exibir_carta(carta1);
    printf("Carta 2:\n");
    exibir_carta(carta2);

    // Atributo fixo para comparação: exemplo com POPULAÇÃO
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
