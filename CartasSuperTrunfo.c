#include <stdio.h>

//Criação de struct que representa as Cartas
typedef struct CartaCidade {
    int codigo;
    char nome[30];
    int populacao;
    float area;
    double pib;
    int numeroPontosTuristicos;
} CartaCidade;

int main() {
    // Instanciação do struct
    CartaCidade cartaCidade;

    //Leitura dos dados
    printf("Bem vindo ao Super Trunfo - Países!\n\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &cartaCidade.codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cartaCidade.nome);
    printf("Digite a população: ");
    scanf("%d", &cartaCidade.populacao);
    printf("Digite a área: ");
    scanf("%f", &cartaCidade.area);
    printf("Digite o PIB: ");
    scanf("%lf", &cartaCidade.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cartaCidade.numeroPontosTuristicos);

    //Impressão dos dados
    printf("\nCódigo da cidade: %d\n", cartaCidade.codigo);
    printf("Nome da cidade: %s\n", cartaCidade.nome);
    printf("População da cidade: %d\n", cartaCidade.populacao);
    printf("Área da cidade: %.2f\n", cartaCidade.area);
    printf("PIB da cidade: %.2lf\n", cartaCidade.pib);
    printf("Número de pontos turísticos: %d\n", cartaCidade.numeroPontosTuristicos);

    return 0;
}
