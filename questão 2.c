#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[5][200];
    int idade[5];
    float nota[5][3];
    int a;
    float media[5];

    for (a = 0; a < 5; a++)
    {
        printf("Digite o nome do %dº aluno: ", a + 1);
        scanf("%s", nome[a]);

        printf("Digite a idade %sº do aluno:", nome[a]);
        scanf("%d", &idade[a]);

        printf("Digite as 3 notas:");
        scanf("%d %f %f", &nota[a][1], &nota[a][2], &nota[a][3]);

        media[a] = (nota[a][1] + nota[a][2] + nota[a][3]) / 3;                                                                                                                                                                                                                            
    }

    for (a = 0; a < 5; a++)
    {
        printf("\nAluno: %s, idade: %d, Notas: %.2f %.2f %.2f, Média: %.2f\n", nome[a], idade[a], nota[a][1], nota[a][2], nota[a][3], media[a]);
    }

    if (media[a] >= 7)
    {
        printf("Aprovado!\n");
    } else if (media[a] >= 5){
        printf("Recuperação!");
    } else {
        printf("Reprovado!");
    }
    
     return 0;
}