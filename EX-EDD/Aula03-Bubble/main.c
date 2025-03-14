#include <stdio.h>
#include <stdlib.h>

 void BubbleSort (int*v, int n){
    int i, fim, aux;
    for(fim = n-1; fim>0; --fim){
        for (i=0;i<fim;i++){
            if(v[i]> v[i+1]){
                aux = v[i];
                v[i] = v [i+1];
                v[i+1] = aux;
            }
        }
    }
 }

int main(){
    int vet1[5] = {18, 67, 3, 5, 4};
    int i;

    BubbleSort(vet1, 5);
    printf("Vetor ordenado: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");

    return 0;
    }

