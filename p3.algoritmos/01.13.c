#include <stdio.h>
#include <stdlib.h>

int* make_positive(const int* values, int n){
    int* v1 = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        v1[i] = values[i];
        if(values[i] < 0){
            v1[i] = values[i] * -1;
        }
    }

    return v1;
}


int main (){

    int values[] = {4,-64,-8,-5,-31,2,6,-7};
    int* res; // receberá o endereço do vetor resultante
    res = make_positive(values, 8);

    for(int i = 0; i < 8; i++){
        printf("%d ", res[i]);
    }
    printf("\n");
    free(res);

    return 0;
}