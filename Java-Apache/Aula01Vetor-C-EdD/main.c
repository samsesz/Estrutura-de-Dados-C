#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double vetNotas [4], media=0, soma=0;
    for (i=0; i<4; i++) {
        printf("Digite as notas: ");
        scanf("%lf", &vetNotas[i]);
        soma = soma + vetNotas[i];
    }


    media = soma / 4.0;
    printf("media do aluno:%lf", media);


    return 0;
}
