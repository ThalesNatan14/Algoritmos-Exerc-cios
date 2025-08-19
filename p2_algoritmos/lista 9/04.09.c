#include <stdio.h>

/*void print_vector_reverse(int n, const int* v){
    for(int i = n-1; i >= 0; i--){
        printf("%d ", *(v+i));
    }
    printf("\n");
}*/

void print_vector_reverse(int n, const int* v){
    int *p = v + n -1;
    for(int i = 0; i < n; i++){
        printf("%d ", *p);
        p--;
    }
    printf("\n");
}

int main(){

    int v[] = {1, 3, 5, 7, 9};
    print_vector_reverse(5, v);

    return 0;
}