#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    int idade[5];
    float altura[5];
    float peso[5];
    int j;

    for (j = 0; j < 5; j++)
    {
        printf("Digite o nome da %dº pessoa: ", j + 1);
        scanf("%s", &nome[j]);

        printf("Digite a idade de %s: ", nome[j]);
        scanf("%d", &idade[j]);

        printf("Digite a altura de %s (em metros):", nome[j]);
        scanf("%f", &altura[j]);

        printf("Digite o peso de %s (em kg): ", nome[j]);
        scanf("%f", peso[j]);

        system("cls");
    }

    int maior_altura = 0, menor_altura = 0;
    for (j = 1; j < 5; j++){
        if (altura[j] > altura[maior_altura])
        maior_altura = j;
        if (altura[j] < altura[menor_altura])
        menor_altura = j
    }

    printf("\nNome da pessoa mais alta: %s, Altura: %.2f metros\n", nome[maior_altura], altura[maior_altura]);
    printf("Nome da pessoa mais baixa: %s, Altura: %.2f metros\n", nome[menor_altura], altura[menor_altura]);

   
    int maior_peso = 0, menor_peso = 0;
    for (j = 1; j < 5; j++) {
        if (peso[j] > peso[maior_peso])
            maior_peso = j;
        if (peso[j] < peso[menor_peso])
            menor_peso = j;
    }

    printf("\nNome da pessoa com maior peso: %s, Peso: %.2f kg\n", nome[maior_peso], peso[maior_peso]);
    printf("Nome da pessoa com menor peso: %s, Peso: %.2f kg\n", nome[menor_peso], peso[menor_peso]);

    int mais_velha = 0, mais_nova = 0;
    for (j = 1; j < 5; j++) {
        if (idade[j] > idade[mais_velha])
            mais_velha = j;
        if (idade[j] < idade[mais_nova])
            mais_nova = j;
    }

    printf("\nNome da pessoa mais velha: %s, Idade: %d anos\n", nome[mais_velha], idade[mais_velha]);
    printf("Nome da pessoa mais nova: %s, Idade: %d anos\n", nome[mais_nova], idade[mais_nova]);

    return 0;                   
}