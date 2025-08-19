#include <stdio.h>
#include <stdlib.h>

int* array_intersection(const int* v1, int n1, const int* v2, int n2, int* n3){
    int* v4 = malloc(n2 * sizeof(int));
    int count = 0;

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(v1[i] == v2[j]){
                v4[count++] = v1[i];
                break;
            }
        }
    }
    *n3 = count;
    return v4;
}

int main(){

    int v1[] = {1,3,2,5,4}; 
    int v2[] = {3,6,7,4};
    int n3; 
    int* v3 = array_intersection(v1, 5, v2, 4, &n3);

    for(int i = 0; i < n3; i++){
        printf("%d ", v3[i]);
    }

    printf("\n");
    free(v3);


    return 0;
}