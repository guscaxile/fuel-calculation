#include <stdio.h>

float calcularConsumo(float distancia, float combustivel) {
    return distancia / combustivel;
}

void exibirRelatorio(float distancia, float combustivel, float consumo) {
    printf("----- Relatório de Consumo -----\n");
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Combustível gasto: %.2f litros\n", combustivel);
    printf("Consumo médio: %.2f km/l\n", consumo);
    printf("-----------------------------\n");
}

int main() {
    float distancia, combustivel, consumo;

    // Solicitar a distância percorrida em km
    printf("Digite a distância percorrida em km: ");
    scanf("%f", &distancia);

    // Solicitar a quantidade de combustível gasto em litros
    printf("Digite a quantidade de combustível gasto em litros: ");
    scanf("%f", &combustivel);

    // Calcular o consumo de combustível em km/l
    consumo = calcularConsumo(distancia, combustivel);

    // Exibir o relatório de consumo
    exibirRelatorio(distancia, combustivel, consumo);

    return 0;
}
