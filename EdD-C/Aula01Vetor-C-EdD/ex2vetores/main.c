#include <stdio.h>
#include <stdlib.h>

int main (){

int i;
double vet1[5], vet2[5], soma=0;

    for (i=0; i<5; i++) {
    printf("Digite os valores do primeiro vetor: ");
    scanf("%lf", &vet1[i]);
}

    for (i=0; i<5; i++) {
    printf("Digite os valores do segundo vetor: ");
    scanf("%lf", &vet2[i]);
    }

for (i=0; i<5; i++){
    soma = soma + vet1[i] + vet2[i];
    printf("O resultado foi:%lf ", soma);
    soma=0;
}


return 0;
}
