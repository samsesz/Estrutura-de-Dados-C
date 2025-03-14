#include <stdio.h>
#include <stdlib.h>

void insertionSort(int*v, int n){
int i=0;
int j=1;
int aux = 0;
while (j<n){
    aux = v[j];
    i = j - 1;
    while ((i >= 0) && (v[i]>aux))
    {
        v[i+1] = v[i];
        i = i-1;
    }

    v[i+1]=aux;
    j=j + 1;
}
}


int main()
{
  int vet1[5] = {18, 67, 3, 5, 4};
    int i;

    insertionSort(vet1, 5);
    printf("Vetor ordenado: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");

    return 0;
}
