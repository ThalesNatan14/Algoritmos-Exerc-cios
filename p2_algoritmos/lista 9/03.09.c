#include <stdio.h>

void print_vector(int n, const int* v){
    const int *p = v;
    for(int i = 0; i < n; i++){
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}

int main(){

    int v[] = {1, 3, 5, 7, 9};
    print_vector(5, v);

    return 0;
}