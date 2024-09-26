#include<stdio.h>
#define TAM 5

int somarPosicao(int M, int N, int vet[]){
    int soma = 0, i, j;
    for(i = N; i <= TAM; i++){
        soma = soma + vet[i];
        if(i == i + M){
            break;
        }
    }
    printf("O resultado da soma sera: %d", soma);
}

main(){
    int vet[TAM], M, N, x;
    printf("Insira os valores para um vetor:\n");
    for(x = 0; x < TAM; x++){
        scanf("%d", &vet[x]);
    }
    printf("Insira dois valores:\n");
    scanf("%d", &M);
    scanf("%d", &N);
    somarPosicao(M, N, vet);
}
