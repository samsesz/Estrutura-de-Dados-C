#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5] = {1,2,3,4,5},a,i;
    a = 3;
    printf("Digite um valor:");
    scanf("%d", &a);
    vet[0] = 1;
    vet[1] = 2;
    vet[2] = 3;
    vet[3] = 4;
    vet[4] = 5;

    for(i=0;i<5;i++){
        scanf("%d", &vet[i]);
    }

    printf("informe a posicao: ");
    scanf("%d", &a);
    printf("valor = %d", vet[a]);

    printf("informe o valor a ser buscado: ");
    scanf("%d", &a);

    for(i=0;i<5;i++){
        if (a == vet[i]){
        printf("elemento encontrado");

            }
    }

    return 0;
}
