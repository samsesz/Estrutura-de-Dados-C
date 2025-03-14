#include <stdio.h>
#include <stdlib.h>

void selection_sort(int*v, int n){
int i, j, min, aux;
for(i=0;i<(n-1);i++){
    min = i;
    for(j = (i+1); j<n; j++){
        if(v[j] < v[min])
            min = j;
    }
    if(v[i] != v[min]){
        aux = v[i];
        v[i] =v[min];
        v[min] = aux;
      }
   }
}



int main(){
  int vet1[5] = {18, 67, 3, 5, 4};
    int i;

    selection_sort(vet1, 5);
    printf("Vetor ordenado: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet1[i]);
    }
    printf("\n");

    return 0;
}
