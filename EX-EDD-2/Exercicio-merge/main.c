#include <stdio.h>
#include <stdlib.h>

void merge (int *v, int left, int middle, int right){
int helper [11];
for (int i = left; i<= right; i++){
    helper [i] = v[i];
}

int i = left;
int j = middle + 1;
int k = left;

while (i<=middle && j <= right) {
    if (helper[i] <= helper[j]){
        v[k] = helper [i];
        i++;
    } else {
     v[k] = helper[j];
     j++;
    }
    k++;
 }

while(i<=middle){
    v[k] = helper[i];
    i++;
    k++;
 }
}

void mergeSort(int*v, int left, int right) {
if (left >= right){
    return;
} else {
int middle = (left + right) / 2;
mergeSort (v, left, middle);
mergeSort (v, middle + 1, right);

merge(v, left, middle, right);
}

}

int main()
{
    int v[11] = {30, 45, 21, 20, 6, 715, 100, 65, 33};
    int n = sizeof(v) / sizeof(v[0]);
    int i;
    mergeSort(v, 0, n - 1);
    for (i = 0; i < 11; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;

}
