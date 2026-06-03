#include <stdio.h>

int main() {
    int v[5];
    int i;
    int soma = 0;
    int maior, menor;
    int pares = 0;
    int impares = 0;

    // Leitura dos números
    for(i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &v[i]);
    }

    // Inicializa maior e menor
    maior = v[0];
    menor = v[0];

    // Processa o vetor
    for(i = 0; i < 5; i++) {

        soma += v[i];

        if(v[i] > maior) {
            maior = v[i];
        }

        if(v[i] < menor) {
            menor = v[i];
        }

        if(v[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    // Exibe os números
    printf("\nVetor: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }

    printf("\nSoma = %d", soma);
    printf("\nMaior = %d", maior);
    printf("\nMenor = %d", menor);
    printf("\nQuantidade de pares = %d", pares);
    printf("\nQuantidade de impares = %d", impares);

    return 0;
}
