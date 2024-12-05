#include <stdio.h>

//Criação de struct que representa as Cartas
typedef struct CartaCidade {
    char estado[20];
    int codigo;
    char nome[30];
    int populacao;
    double area;
    double pib;
    int numeroPontosTuristicos;
    double densidadePopulacional;
    double pibPerCapita;
} CartaCidade;

int main() {
    // Instanciação do struct
    CartaCidade cartaCidade;

    //Leitura dos dados
    printf("Bem vindo ao Super Trunfo - Países!\n\n");
    printf("Digite o estado: ");
    scanf("%d", cartaCidade.estado);
    printf("Digite o código da cidade: ");
    scanf("%d", &cartaCidade.codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cartaCidade.nome);
    printf("Digite a população: ");
    scanf("%d", &cartaCidade.populacao);
    printf("Digite a área: ");
    scanf("%lf", &cartaCidade.area);
    printf("Digite o PIB: ");
    scanf("%lf", &cartaCidade.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cartaCidade.numeroPontosTuristicos);

    cartaCidade.densidadePopulacional = cartaCidade.populacao/cartaCidade.area;
    cartaCidade.pibPerCapita = cartaCidade.pib/cartaCidade.populacao;
    
    //Impressão dos dados
    printf("\nEstado: %d\n", cartaCidade.estado);
    printf("\nCódigo da cidade: %d\n", cartaCidade.codigo);
    printf("Nome da cidade: %s\n", cartaCidade.nome);
    printf("População da cidade: %d\n", cartaCidade.populacao);
    printf("Área da cidade: %.2lf\n km²", cartaCidade.area);
    printf("Densidade Populacional: %.2lf\n pessoas/km²", cartaCidade.densidadePopulacional);
    printf("PIB da cidade: %.2lf\n bilhões de reais", cartaCidade.pib);
    printf("PIB per Capita: %.2lf\n reais", cartaCidade.pibPerCapita);
    printf("Número de pontos turísticos: %d\n", cartaCidade.numeroPontosTuristicos);

    return 0;
}
