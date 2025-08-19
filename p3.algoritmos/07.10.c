#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* array_union(const int* v1, int n1, const int* v2, int n2, int* n3){
    int* vet = malloc((n1 + n2) * sizeof(int));
    int count = 0;
    for(int i = 0; i < n1; i++){
        vet[count++] = v1[i];
    }

    for(int i = 0; i < n2; i++){
        int ex = 0;
        for(int j = 0; j < count; j++){
            if(v2[i] == vet[j]){
                ex = 1;
                break;
            }
        }
                if(!ex){
                vet[count++] = v2[i];
                }
    }

    *n3 = count;
    return vet;
}

int main(){

    int v1[] = {1,3,2,5,4}; 
    int v2[] = {3,6,7,4}; 
    int n3;
    int* v3 = array_union(v1, 5, v2, 4, &n3);

    for(int i = 0; i < n3; i++){
        printf("%d ", v3[i]);
    }
    printf("\n");

    free(v3);


    return 0;
}