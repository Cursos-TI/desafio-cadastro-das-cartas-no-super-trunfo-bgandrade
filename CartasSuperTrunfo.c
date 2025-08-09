#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*
    INSTRUÇÕES NÍVEL INICIANTE:
    Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    População: O número de habitantes da cidade. Tipo: int
    Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    PIB: O Produto Interno Bruto da cidade. Tipo: float
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

    c
    1 - Calcular a Densidade Populacional: Divida a população da cidade pela sua área. 
    O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. 
    Armazene esse valor em uma variável do tipo float

    2 - Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. 
    O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. 
    Armazene esse valor em uma variável do tipo float.

    3 - Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), 
    seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. 
    Formate os valores de ponto flutuante com duas casas decimais.

    INSTRUÇÕES NÍVEL MESTRE:

    1 - Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos 
    (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
    Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!

    2 - Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder.
    Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.

    3- Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), 
    exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
    */


    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    unsigned int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    char resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, 
            resultadoDensidadePopulacional, resultadoPibPerCapita, resultadoSuperPoder;

    // Apresentação do jogo e coleta de dados
    printf("Super Trunfo - Jogo de Cartas\n");
    printf("Iniciando o cadastro de cartas\n");

    // Coleta de dados para a carta 01
    printf("Por favor, insira os dados da carta 01:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Coleta de dados para a carta 02
    printf("Por favor, insira os dados da carta 02:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de Reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita, convertendo PIB de bilhões para reais
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1; 

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);
    // Acho que faria mais sentido o super poder ser divido pela densidade, dessa forma, quanto maior a densidade, menor o super poder, mas vamos seguir a lógica do desafio.


    // Exibi os dados coletados
    printf("\nCartas cadastradas com sucesso!\n");
    printf("-----------\n");
    printf("Carta 01\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Pontos Turísticos: %u\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("-----------\n");
    printf("Carta 02\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %u\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("-----------\n");

    printf("Comparando as cartas...\n");
    // Comparação das cartas
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2; // Menor densidade vence
    resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;
    
    // Exibição dos resultados das comparações    
    printf("Comparação das Cartas:\n");
    printf("População: Carta %d venceu %d\n", resultadoPopulacao, resultadoPopulacao);
    printf("Área: Carta %d venceu %d\n", resultadoArea, resultadoArea);
    printf("PIB: Carta %d venceu %d\n", resultadoPib, resultadoPib);
    printf("Pontos Turísticos: Carta %d venceu %d\n", resultadoPontosTuristicos, resultadoPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu %d\n", resultadoDensidadePopulacional, resultadoDensidadePopulacional);
    printf("PIB per Capita: Carta %d venceu %d\n", resultadoPibPerCapita, resultadoPibPerCapita);
    printf("Super Poder: Carta %d venceu %d\n", resultadoSuperPoder, resultadoSuperPoder);

    printf("Pressione qualquer tecla para sair...\n");
    scanf(" %c"); // Espera por uma tecla para encerrar o programa
    return 0;
}
