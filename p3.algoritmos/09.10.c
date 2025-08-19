#include <stdio.h>
#include <stdlib.h>

int* expand(int* v, int n, int new_n){
    if(new_n < 0){
        return NULL;
    }

    int* v2 = malloc(new_n * sizeof(int));
    
    for(int i = 0; i < new_n; i++){
        v2[i] = 0;
    }

    if(new_n < n){
        n = new_n;
    }
    for(int i = 0; i < n; i++){
        v2[i] = v[i];
    }

    free(v);
    return v2;
}

int fill(int* v, int n){
    for(int i = 0; i < n; i++){
        v[i] = rand() % 100;
    }
}

void print_vector(int* v, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(){

    int* v = malloc(10 * sizeof(int)); 
    fill(v, 10);   
    print_vector(v, 10);
    v = expand(v, 10, 20);
    print_vector(v, 20);


    return 0;
}