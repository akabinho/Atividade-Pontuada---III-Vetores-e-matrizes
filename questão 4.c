#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tamanho = 5;
    int i, v[tamanho];
    int par = 0, impar = 0;
    int maior = 0;
    int menor = 9999;
    float mediaTotal = 0;
    float mediapar = 0;
    int somapar = 0;
    int somaimpar = 0;
    int negativo = 0;

    for ( i = 0 ; i < tamanho; i++)
    {
        printf("Digite os numeros:");
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) {
            par++;
            somapar = somaimpar + v[i];
        }else
        {
            impar++;
            somaimpar = somapar - v[i];
        }
        if (v[i] > maior) {
            maior = v[i];
        }
        if (v[i] < menor){
            menor = v[i];
        }if (v[i]<0) {
            negativo++;
        } if (par > 0){
            mediapar = (float)somapar / par;
        } else {
            mediapar = 0;
        }
    
    }
    printf("\nquantidade de numeros impares: %d \n ", impar);
    printf("\nquantidade de numeros negativos: %d \n", negativo);
    printf("\nNumero maior: %d \n", maior);
    printf("\nNumero menor> %d \n", menor);
    printf("\nMedia dos numeros pares: %f\n", mediapar);
    printf("\nMedia total dos numeros: %f\n");
    
    return 0;
}