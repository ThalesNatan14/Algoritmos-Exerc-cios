#include <stdio.h>
#include <stdlib.h>

int* get_largest(int n, int* v, int max){
   for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[j] > v[i]) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }

    int* maiores = malloc(max * sizeof(int));
    for (int i = 0; i < max; i++) {
        maiores[i] = v[i];
    }

    return maiores;
}

void print_vector(int n, int v[]){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){

    int v0[] = {6,10,2,1,2,3,9};
    int* v1 = get_largest(7, v0, 2);
    print_vector(2, v1);

    free(v1);

    return 0;
}