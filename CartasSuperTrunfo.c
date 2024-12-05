#include <stdio.h>

//Criação de struct que representa as Cartas
typedef struct CartaCidade {
    char estado;
    char codigo[5];
    char nome[30];
    long int populacao;
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
    scanf("%c", &cartaCidade.estado);
    printf("Digite o código da cidade: ");
    scanf("%s", cartaCidade.codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cartaCidade.nome);
    printf("Digite a população: ");
    scanf("%li", &cartaCidade.populacao);
    printf("Digite a área: ");
    scanf("%lf", &cartaCidade.area);
    printf("Digite o PIB: ");
    scanf("%lf", &cartaCidade.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cartaCidade.numeroPontosTuristicos);

    cartaCidade.densidadePopulacional = (double) cartaCidade.populacao/cartaCidade.area;
    cartaCidade.pibPerCapita = cartaCidade.pib/cartaCidade.populacao;
    
    //Impressão dos dados
    printf("\nEstado: %c\n", cartaCidade.estado);
    printf("\nCódigo da cidade: %s\n", cartaCidade.codigo);
    printf("Nome da cidade: %s\n", cartaCidade.nome);
    printf("População da cidade: %li\n", cartaCidade.populacao);
    printf("Área da cidade: %.2lf km²\n", cartaCidade.area);
    printf("Densidade Populacional: %.2f pessoas/km²\n", cartaCidade.densidadePopulacional);
    printf("PIB da cidade: %.2lf bilhões de reais\n", cartaCidade.pib);
    printf("PIB per Capita: %.2lf reais\n", cartaCidade.pibPerCapita);
    printf("Número de pontos turísticos: %d\n", cartaCidade.numeroPontosTuristicos);

    return 0;
}
