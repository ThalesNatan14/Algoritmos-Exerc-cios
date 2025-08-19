#include <stdio.h>
// questão 06 da lista 09

void print_vec2D(int rows, int cols, const int* v){
    
    for (int i = 0; i < rows*cols; i++){
        printf("%d ", *v);
        v++;
    }
    printf("\n");
}

int main(){

    int v[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9,10,11,12}
        };
 print_vec2D(3, 4, (int*)v);

    return 0;
}